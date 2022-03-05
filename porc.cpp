#include <iostream>
using std::cout;
using std::cin;

int main(){

double porc, valor, fim;

cout<<"Entre com a porcentagem: \n";
cin>>porc;
cout<<"Entre com o valor: \n";
cin>>valor;

fim = (porc * valor)/100;

cout<<porc<<" porcento de "<<valor<<" é igual a: "<<fim<<"\n";

return 0;


}
