#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using namespace std;

int main(){
  string nome;
  cout<<"Entre com o texto: ";
  getline(cin, nome);
  cout<<"Você digitou:"<<nome<<endl;
  return 0;
}
