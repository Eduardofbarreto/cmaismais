#ifndef PRODUTO_H
#define PRODUTO_H

#include<string>

class Produto{
    public:
        std::string nome;
        double valor;
        int quantidade;
        double vTotal;

    Produto();

    void coleta();
    void calculo();
    void exibir();
};

#endif