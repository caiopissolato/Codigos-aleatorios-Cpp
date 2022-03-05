#include <string>
#include "Campeonato.h"
#include <iostream>

using std::cout;
using std::string;

Campeonato::Campeonato(string aNome, int aNum_Part, string aAtual_Camp, string aPais, string aMaior_Camp){
    nome       = aNome;
    num_part   = aNum_Part;
    atual_camp = aAtual_Camp;
    pais       = aPais;
    maior_camp = aMaior_Camp; 
}

void Campeonato::setNome(string aNome){nome = aNome;}
void Campeonato::setNum_Part(int aNum_Part){num_part = aNum_Part;}
void Campeonato::setAtual_Camp(string aAtual_Camp){atual_camp = aAtual_Camp;}
void Campeonato::setPais(string aPais){pais = aPais;}
void Campeonato::setMaior_Camp(string aMaior_Camp){maior_camp = aMaior_Camp;}

string Campeonato::getNome(){return nome;}
int Campeonato::getNum_Part(){return num_part;}
string Campeonato::getAtual_Camp(){return atual_camp;}
string Campeonato::getPais(){return pais;}
string Campeonato::getMaior_Camp(){return maior_camp;}

void Campeonato::print(){
    cout<<"Nome: "<<nome<<"\n"<<"Numero de participantes: "<<num_part<<"\n"<<"Atual Campeao: "<<atual_camp<<"\n"<<"Pais: "<<pais<<"\n"<<"Maior Campeao: "<<maior_camp<<"\n";
}
