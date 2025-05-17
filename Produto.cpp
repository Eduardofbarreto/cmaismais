#include "Produto.h"
#include<iostream>
#include<iomanip>

Produto::Produto(){}

void Produto::coleta(){
    std::cout<<"Digite o nome do produto: "<<std::endl;
    std::cin>>nome;
    std::cout<<"Digite o valor do produto: "<<std::endl;
    std::cin>>valor;
    std::cout<<"Digite a quantidade: "<<std::endl;
    std::cin>>quantidade;
}

void Produto::calculo(){
    vTotal = valor * quantidade;
}

void Produto::exibir(){
    std::cout<<"O produto comprado é: "<<nome<<std::endl;
    std::cout<<"Você comprou "<<quantidade<<" "<<nome<<"."<<std::endl;
    std::cout<<"Num total de: R$"<<std::fixed<<std::setprecision(2)<<vTotal<<std::endl;
}

