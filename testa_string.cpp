#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  string palavra = "Seu nome é: ";
  string nome;

  for(int i = 0; nome != "fim"; i++){
      cout<<"Entre com seu nome: "<<endl;
      getline(cin,nome);
        if(nome == "fim"){
          break;}
      cout<<palavra<<nome<<".\n"<<endl;}
  return 0;
}
