#include "Banco.h"
#include <iostream>

class Conta_Corrente: public Banco{
    private:
        double saldo;
        double limite;

    public:
        Conta_Corrente(std::string aNome, int aNum, int aCpf, double aSaldo, double aLimite);


        double getSaldo();
        void setSaldo(double aSaldo);

        double getLimite();
        void setLimite(aLimite);
        void print();
};