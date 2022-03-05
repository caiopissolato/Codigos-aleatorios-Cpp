#include <iostream>
#include <string>
#include "Banco.h"

using std::string;
using std::cout;

Banco::Banco(string aNome, int aNum, int aCpf){
    nome = aNome;
    num  = aNum;
    cpf  = aCpf;
}

void Banco::setNome(string aNome){nome = aNome;}
void Banco::setNum(int aNum){num = aNum;}
void Banco::setCpf(int aCpf){cpf = aCpf;}

string Banco::getNome(){return nome;}
int Banco::getNum(){return num;}
int Banco::getCpf(){return cpf;}

void Banco::print(){
    cout<<"Nome: "<<nome<<"\n"<<"Numero da conta: "<<num<<"\n"<<"CPF do cliente: "<<cpf<<"\n";
}

