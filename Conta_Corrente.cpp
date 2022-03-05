#include <iostream>
#include <string>
#include "Conta_Corrente.h"

using std::string;
using std::cout;

Conta_Corrente::Conta_Corrente(string aNome, int aNum, int aCpf, double aSaldo, double aLimite);
: ::Banco(aNome, aNum, aCpf, aSaldo){
    limite = aLimite;
}


void Conta::Corrente::setSaldo(double aSaldo){saldo = aSaldo;}
double Conta_Corrente::getSaldo(){return saldo;}

void Conta_Corrente::setLimite(double aLimite){limite = aLimite;}
double Conta_Corrente::getLimite(){return limite;}

void Conta_Corrente::print(){
    void Banco::print();
        cout<<"Limite: "<<limite<<"\n";
    
}