#include <iostream>

using std::cout;


int func(int a){
 static int x = 0; //variavel estatica, retem valor entre chamadas
 x += a; //escopo local
 return x;   
}

int main(){
 int a;  
 for(int i=0; i<=100; i++){
   a = func(1);
 }
 
 cout<<"Valor de a = "<< a <<"\n";

}
