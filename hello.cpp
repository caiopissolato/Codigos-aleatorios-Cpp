#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Hello{
public:
  void print(){
    cout<<"Hello World!!!"<< endl;

  }

  void num(){
    int x;
    cout<<"Entre com um numero: "<<endl;
    cin>>x;
    cout<<"Você digitou:"<<x<<endl;
  }
};

int main(){
  Hello meuObjHello;
  meuObjHello.print();
  meuObjHello.num();
  return 0;
}
