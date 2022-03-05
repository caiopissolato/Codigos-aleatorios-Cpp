#include <iostream>
#include <cmath>
using std::cout;

int incrementa(int x){
  static int y = 0;
  y += x;
  return y;
}

int main()
{
  int x = 1;
  int z;
  
  for(int i=0; i<100; i++){
    z = incrementa(x);
  }

  cout<<"Valor de x = "<< z <<"\n";
  
  return 0; 
}


