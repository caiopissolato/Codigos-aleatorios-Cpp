#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using namespace std;

class Nome{
public:
  void show(){
    string texto;
    cout<<"Entre com o texto: "<<endl;
    getline(cin,texto);
    cout<<"Você digitou: "<<texto<<endl;
  }
};

int main(){
  Nome meuNome;
  meuNome.show();
  return 0;
}
