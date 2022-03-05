#include <iostream>
#include <fstream>

using std::cout;
using std::ifstream; //para criar objeto para ler de arq
using std::ios;

int main()
{
  ifstream meuArq; //cria objeto com constr. defaut
  meuArq.open("numeros.txt", ios::in);

  double x, y, z;

  //como ler do aquivo
  //while(meuArq >> x >> y >> z){
  //  cout<<x<<" "<<y<<" "<<z<<"\n";
  //}
  
  while(!meuArq.eof()){//eof(): funcao membro de ifstream e testa fim de arquivo 
    meuArq >> x >> y >> z;
    cout<<x<<" "<<y<<" "<<z<<"\n";
  }

  meuArq.close();

  return 0;
}
