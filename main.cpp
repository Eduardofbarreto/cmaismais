#include <iostream> 
#include <vector>  
#include <string>  

int main() {

    std::vector<std::string> nomes;
    std::vector<int>numeros;

    nomes.push_back("Eduardo");
    nomes.push_back("Fernanda");
    nomes.push_back("Mariana");
    nomes.push_back("Tânia");
    nomes.push_back("Fernanda");
    
    std::cout<<"---Lista de nomes---"<<std::endl;

    if(nomes.empty()){
        std::cout<<"Nenhum nome na lista pronta!"<<std::endl;
    }else{
        for(size_t i = 0; i < nomes.size(); ++i){
            std::cout<<(i + 1)<<". "<<nomes[i]<<std::endl;
        }
    }

<<<<<<< HEAD
    std::cout << "\n--- Fim da Lista ---\n";
=======
    std::cout<<"---Fim da lista---"<<std::endl;
>>>>>>> refs/remotes/origin/main

    return 0;
}