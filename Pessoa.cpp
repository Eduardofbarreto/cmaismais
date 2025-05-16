#include "Pessoa.h"
#include<iostream>

Pessoa::Pessoa(){}

void Pessoa::coleta(){
    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>nome;
    std::cout<<"Digite seu sobrenome: "<<std::endl;
    std::cin>>sobrenome;
    std::cout<<"Digite sua idade: "<<std::endl;
    std::cin>>idade;
}

void Pessoa::apresentar(){
    std::cout<<"Seu nome é "<<nome<<" "<<sobrenome<<"."<<std::endl;
    std::cout<<"Você tem "<<idade<<" anos."<<std::endl;
}
