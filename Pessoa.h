#ifndef PESSOA_H
#define PESSOA_H

#include<string>

class Pessoa{
    public:
        std::string nome;
        std::string sobrenome;
        int idade;

        Pessoa();

        void coleta();
        void apresentar();
};

#endif