#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    string n1, n2;

    cout<<"Entre com a primeira palavra: \n";
    getline(cin, n1);
    cout<<"Entre com a segunda palavra: \n";
    getline(cin, n2);
    if(n1==n2){
      cout<<endl<<"PALAVRAS IGUAIS.\n"<<endl;
    }else{
      cout<<endl<<"PALAVRAS DIFERENTES.\n"<<endl;
    }
  return 0;
}
