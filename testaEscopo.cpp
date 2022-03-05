#include <iostream>

using std::cout;

int var1 = 30; //variavel global 

int main()
{
  int var2 = 15;
  cout<< var1 <<" "<< var2 <<"\n"; //imprime 30 15
  
  int var1 = 15; //sobrepoe aa variavel global
  cout<< var1 <<" "<< var2 <<"\n"; //imprime 15 15

  cout<< ::var1 <<" "<< var2 <<"\n"; //imprime 15 15

  {
    int var3 = 55;
    cout<< var3 <<" "<< var2 <<"\n"; //imprime 55 15
  }

  cout<< var3 <<" "<< var2 <<"\n"; //erro! var3 fora de escopo
  return 0;
}


