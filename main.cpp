#include <iostream>  // Para entrada/saída (cout, cin)
#include <string>    // Para usar std::string
#include <pqxx/pqxx> // Para interagir com o PostgreSQL

// --- Configurações do Banco de Dados ---
// Mantenha as mesmas que você já está usando
const std::string DB_HOST = "127.0.0.1";
const std::string DB_NAME = "postgres";
const std::string DB_USER = "postgres";
const std::string DB_PASSWORD = "root"; // ATENÇÃO: Use sua senha real aqui!
const std::string DB_PORT = "5432";

// Nome da tabela onde você quer salvar o nome
const std::string TABELA_PESSOAS = "teste";

// Função para construir a string de conexão com o banco de dados
std::string get_connection_string() {
    return "host=" + DB_HOST +
           " port=" + DB_PORT +
           " dbname=" + DB_NAME +
           " user=" + DB_USER +
           " password=" + DB_PASSWORD;
}

// Função principal que adiciona um nome
int main() {
    std::string nome;
    int idade;

    // Pede o nome ao usuário
    std::cout << "Digite o nome da pessoa para salvar: ";
    // std::getline(std::cin >> std::ws, nome);
    // Use std::cin >> nome; se for apenas uma palavra.
    // Use std::getline(std::cin >> std::ws, nome); se for um nome composto (com espaços).
    // Para simplificar, vou usar apenas std::cin >> nome;
    std::cin >> nome; 

    std::cout<<"Digite a idade: "<<std::endl;
    std::cin>>idade;

    try {
        // 1. Conecta ao banco de dados
        pqxx::connection C(get_connection_string());
        std::cout << "Conexão com o banco de dados '" << C.dbname() << "' estabelecida com sucesso!" << std::endl;

        // 2. Inicia uma transação
        pqxx::work W(C);

        // 3. Prepara a query SQL para inserir o nome
        // Usamos %s ou $1 no SQL, e passamos a variável como um parâmetro para prevenir SQL Injection.
        std::string sql = "INSERT INTO " + TABELA_PESSOAS + " (nome, idade) VALUES ($1, $2);";
        //std::string sql = "INSERT INTO " + TABELA_PESSOAS + " (idade) VALUES ($2);";

        // 4. Executa a query com o nome fornecido como parâmetro
        W.exec_params(sql, nome, idade);

        // 5. Confirma a transação (salva as mudanças no banco)
        W.commit();

        std::cout << "Nome '" << nome << "' salvo com sucesso na tabela '" << TABELA_PESSOAS << "'!" << std::endl;

    } catch (const pqxx::sql_error &e) {
        // Trata erros específicos do SQL
        std::cerr << "Erro SQL ao salvar o nome: " << e.what() << " (Query: " << e.query() << ")" << std::endl;
    } catch (const std::exception &e) {
        // Trata outros tipos de erros
        std::cerr << "Erro geral: " << e.what() << std::endl;
    }

    return 0; // Indica que o programa terminou com sucesso
}