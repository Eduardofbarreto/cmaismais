#include <iostream> 
#include <vector>  
#include <string>   
#include <limits>   
#include <cctype>   

int main() {
    std::vector<std::string> nomes_de_pessoas;
    std::string nome_digitado; 
    char adicionar_outro_nome_escolha; 

    std::cout << "--- Adicionar Nomes à Lista ---\n";

    do {
        std::cout << "\nDigite um nome para adicionar à lista: ";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::getline(std::cin, nome_digitado); 


        if (!nome_digitado.empty()) {
            nomes_de_pessoas.push_back(nome_digitado); 
            std::cout << "\"" << nome_digitado << "\" foi adicionado à lista.\n";
        } else {
            std::cout << "O nome não pode ser vazio. Por favor, digite algo.\n";
        }

        std::cout << "Deseja adicionar outro nome? (S/N): ";
        std::cin >> adicionar_outro_nome_escolha;
        //adicionar_outro_nome_escolha = toupper(adicionar_outro_nome_escolha);

    } while (adicionar_outro_nome_escolha == 'S');

    std::cout << "\n--- Lista Final de Nomes ---\n";

    if (nomes_de_pessoas.empty()) {
        std::cout << "Nenhum nome foi adicionado à lista.\n";
    } else {
        for (size_t i = 0; i < nomes_de_pessoas.size(); ++i) {
            std::cout << (i + 1) << ". " << nomes_de_pessoas[i] << "\n";
        }
    }

    std::cout << "\n--- Fim da Lista ---\n";

    return 0;
}