#include <iostream>
#include <string>

using std::cout;
using std::string;

class MinhaClasse{
    private:
        int id;
    
    public:
        MinhaClasse(int id){
            this->id = id;
            cout<<"\nConstrutor do objeto "<<this->id;
        }
        
        //destrutor
        ~MinhaClasse(){
            cout<<"\nChamou destrutor do objeto "<<this->id<<"\n";
        }
        
};

MinhaClasse obj1(1);//global: primeiro a ser criado

void func(){
    MinhaClasse obj3(3); //terceiro criado
    MinhaClasse obj4(4); //quarto criado
    static MinhaClasse obj6(6); //quinto criado
} //chama o destrutor do 4, 3

int main(){
    MinhaClasse obj2(2);//local:segundo a ser criado
    func();

    {
        MinhaClasse obj5(5);//sexto a ser criado
    }//chama destrutor do obj5

    return 0;
}//destrutor do obj2, obj6 e' chamado(static), destrutor do obj1 (global)