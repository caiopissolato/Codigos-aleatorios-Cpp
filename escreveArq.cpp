#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::ofstream; //para criar objeto p/ escr. em arq
using std::ios;
using std::string;

int main()
{
  ofstream meuArq; //cria objeto com constr. defaut
  meuArq.open("/home/caio/Documentos/C++/PROG2/numeros2.txt", ios::out);//abre o arquivo

  double x, y, z;

  //como escrever no arquivo

  cout<<"\nEntre com sequencia de tres numeros seguido de enter";
  cin >> x >> y >> z;
  meuArq <<x<<" "<<y<<" "<<z<<"\n";
  meuArq.close(); //fecha o arquivo

  cout<<"\nEntre com sequencia de tres numeros seguido de enter";
  cin >> x >> y >> z;
  meuArq <<x<<" "<<y<<" "<<z<<"\n";

  meuArq.close();

  return 0;
}
