#include <iostream>
#include <string>
using std::cout;
using std::string;

class Conta{
  private:
    string nome_dono; // nome do dono  
    int numero; //numero da conta
    float rendimento = 0.5; 
    static int total_contas; //variavel de classe (uma copia para toda a classe) 
  public:

    Conta(string nome, int num){
       nome_dono = nome;
       numero = num;
       total_contas++;
    }
    void setRendimento(float nTaxa){
      rendimento = nTaxa;
    }

    string& getNome(){ return nome_dono; }
    int getNumero(){ return numero; }
    float getRendimento(){ return rendimento; }
    static int getTotalContas(){ return total_contas; }
    

};

int Conta::total_contas = 0; //inicializa a variavel

int main(){
  Conta c1("Linder",111), c2("Marcelo", 222);
  Conta c3("Lucas", 333);


  cout<<"C1 = "<<c1.getNome()<<"\n";
  cout<<"C2 = "<<c2.getNome()<<"\n";
  cout<<"C3 = "<<c3.getNome()<<"\n";

  string& nome1 = c1.getNome();
  cout<<"Nome1 = "<<nome1<<"\n"; 
 
  nome1 = "Luzia";
  cout<<"C1 = "<<c1.getNome()<<"\n";
   
  return 0;
}
