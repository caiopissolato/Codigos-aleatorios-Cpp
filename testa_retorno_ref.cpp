#include <iostream>
#include <string>

using std::cout;
using std::string;

class Pessoa{
  private:
    string nome; //dado membro 
    int idade; //dada membro
    static int ncromo; //dado de classe

  public:
    Pessoa(string nome, int idade){
      this->nome = nome;
      this->idade = idade;
    }

    string getNome() { return this->nome; } 
    int getIdade() { return this->idade; }
    string* getNome2() { return &(this->nome); } //quebra o encapsulamento
    int& getIdade2() { return &(this->idade); }  //quebra o encapsulamento 
};

int main()
{
  Pessoa p1("Joao", 33);
  
  string *n = p1.getNome2();
  int& i = p1.getIdade2();

  *n = "Joao modificado"; //quebra encasulam.
  i = 55;                 //quebra encapsul.
  
  cout<<"Nome: "<<p1.getNome()<<"\n";
  cout<<"Idade: "<<p1.getIdade()<<"\n";

  return 0;
}
