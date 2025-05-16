#include<iostream>
#include<string>

class Pessoa{
    public:
    std::string nome;

    Pessoa(){}

    void coleta(){
        std::cout<<"Digite seu nome: "<<std::endl;
        std::cin>>nome;
    }

    void apresentar(){
        std::cout<<"Seu nome é "<<nome<<"."<<std::endl;
    }
};

int main(){

    Pessoa minhaPessoa;
    minhaPessoa.coleta();
    minhaPessoa.apresentar();

    return 0;
}