#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::ifstream; //para criar objeto para ler de arq
using std::ios;
using std::string;

int main()
{
  ifstream meuArq; //cria objeto com constr. defaut
  meuArq.open("frases.txt", ios::in);

  string frase;

  while(getline(meuArq,frase)){
    cout<<frase<<"\n";
  }

  return 0;
}
