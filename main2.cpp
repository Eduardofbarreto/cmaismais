#include<iostream>
#include<string>
#include<iomanip>

class Produto{
    private:
    std::string nome;
    double valor;

    public:
    
    std::string getnome(){
        return nome;
    }

    double getvalor(){
        return valor;
    }

    void setnome(std::string n){
        nome = n;
    }

    void setvalor(double v){
        valor = v;
    }

    Produto():nome(""), valor(0.00){}

    virtual void coletar(){
        std::cout<<"Digite o nome do produto: "<<std::endl;
        std::cin>>nome;
        std::cout<<"Digite o preço do produto: "<<std::endl;
        std::cin>>valor;
    }

    virtual void exibir(){
        std::cout<<std::endl;
        std::cout<<"Nome: "<<nome<<std::endl;
        std::cout<<"R$ "<<std::fixed<<std::setprecision(2)<<valor<<std::endl;
    }
};

class Guitarra : public Produto{
    private:
    double peso;
    std::string cor;

    public:

    double getpeso(){
        return peso;
    }    

    std::string getcor(){
        return cor;
    }

    void setpeso(double p){
        peso = p;
    }

    void setcor(std::string c){
        cor = c;
    }

    Guitarra(): Produto(), peso(0.00), cor(""){}

    void coletar()override{
        Produto::coletar();
        std::cout<<"Qual peso da guitarra: "<<std::endl;
        std::cin>>peso;
        std::cout<<"Qual a cor da guitarra: "<<std::endl;
        std::cin>>cor;
    }

    void exibir()override{
        Produto::exibir();
        std::cout<<"Peso: "<<peso<<"kg"<<std::endl;
        std::cout<<"Cor: "<<cor<<std::endl;
        std::cout<<std::endl;
    }
};

int main(){

    Guitarra g;
    g.coletar();
    g.exibir();

    return 0;
}