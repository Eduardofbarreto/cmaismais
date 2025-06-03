#include <iostream> 
#include <vector>  
#include <string>  

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

    std::cout<<nomes_de_pessoas.size()<<std::endl;

    return 0;
}