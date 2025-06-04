#include <iostream> 
#include <vector>  
#include <string>  
#include<iomanip>
#include<limits>

class Produto{
    private:
    std::vector<std::string> nome;
    std::vector<double>preco;
    std::string nome_input;
    double preco_input;

    public:

    Produto(): nome(""), preco(0.00){}

    std::vector<std::string> getnome(){
        return nome;
    }

    std::vector<double> getpreco(){
        return preco;
    }

    void setnome(std::vector<std::string> n){
        nome = n;
    }

    void setpreco(std::vector<double> p){
        preco = p;
    }

    virtual void coletar(){
        
        do{
            std::cout<<"Digite o nome do produto: "<<std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::getline(std::cin, nome_input);
            std::cout<<"Digite o preço do produto: "<<std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cin>>preco_input;

            if(!nome_input.empty() && !preco_input.empty()){
                nome.push_back(nome_input);
                preco.push_back(preco_input);
                std::cout<<"Produto armazenado!\""<<nome_input<<"\"\n";
                std::cout<<"Preço armazenado!\""<<preco_input<<"\"\n";
            }
        }
    }
};

int main() {

    std::vector<std::string> nomes_de_pessoas;

    nomes_de_pessoas.push_back("Alice");
    nomes_de_pessoas.push_back("Bruno");
    nomes_de_pessoas.push_back("Carla");
    nomes_de_pessoas.push_back("Daniel");
    nomes_de_pessoas.push_back("Elena");
    nomes_de_pessoas.push_back("Fernanda"); 

    std::cout << "--- Lista de Nomes Prontos ---\n";

    if (nomes_de_pessoas.empty()) {
        std::cout << "Nenhum nome na lista pronta.\n";
    } else {
        for (size_t i = 0; i < nomes_de_pessoas.size(); ++i) {
            std::cout << (i + 1) << ". " << nomes_de_pessoas[i] << "\n";
        }
    }

    std::cout << "\n--- Fim da Lista ---\n";

    return 0;
}