#include "Time.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;

Time::Time(string aNome, int aNum_Part, string aAtual_Camp, string aPais, string aMaior_Camp, string aNome_Time, string aCor, string aRival)
:Campeonato(aNome, aNum_Part, aAtual_Camp, aPais, aMaior_Camp){
    nome_time = aNome_Time;
    cor       = aCor;
    rival     = aRival;
}

void Time::setNome_Time(string aNome_Time){nome_time = aNome_Time;}
void Time::setCor(string aCor){cor = aCor;}
void Time::setRival(string aRival){rival = aRival;}

string Time::getNome_Time(){return nome_time;}
string Time::getCor(){return cor;}
string Time::getRival(){return rival;}

void Time::print(){
    Campeonato::print();
    cout<<"Nome do Time: "<<nome_time<<"\n"<<"Cor predominante: "<<cor<<"\n"<<"Maior Rival: "<<rival<<"\n";
}

