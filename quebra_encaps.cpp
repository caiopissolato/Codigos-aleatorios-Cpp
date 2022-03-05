#include <iostream>
#include <string>

using std::cout;
using std::string;

class Pessoa{
    private:
        string nome;
        int idade;

    public:
        Pessoa(string aNome, int aIdade){
            nome = aNome;
            idade = aIdade;
        }
        string getNome(){return nome;}
        int getIdade(){return idade;}

        string* getNome2(){return &nome;}
        int& getIdade2(){return idade;}
};        

int main(){
    Pessoa p1("Joao", 33);
    string *n = p1.getNome2();
    int& i = p1.getIdade2();

    *n = "Joao modificado";//quebra encapsulamento
    i = 55;                //quebra encapsulamento
    
    cout<<"Nome: "<<p1.getNome()<<"\n";
    cout<<"Idade: "<<p1.getIdade()<<"\n";
    
    return 0;
}