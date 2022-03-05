#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
  int a = 1;
  int b = 1;
  int aux;
  int fib;
  cout<<"Entre com o valor: ";
  cin>>fib;
  cout<<"1 ";
  while(a <= fib){
    cout<<a<<" ";
    aux = a;
    a = a + b;
    b = aux;
  }
  cout<<"\n";
  return 0;
}
