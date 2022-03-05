#include "Time.h"
#include <string>
#include <iostream>

using std::string;
using std::cout;

int main(){
    Time t1("Premier League", 20, "Manchester City", "Inglaterra", "Manchester United", "Chelsea", "Azul", "Arsenal");
    t1.print();
    cout<<"\n";
    t1.setNome("Campeonato Ingles");
    t1.print();
    cout<<"\n";

    Time t2("Brasileirao", 20, "Palmeiras", "Brasil", "Palmeiras", "Sao Paulo", "Tricolor", "Corinthians");
    t2.print();
    cout<<"\n";

    Time t3("LA Liga", 20, "Barcelona", "Espanha", "Real Madrid", "Valencia", "Branco", "Levante");
    t3.print();
    cout<<"\n";

    t3.setNome_Time("Villarreal");
    t3.setCor("Amarelo");
    t3.print();
    cout<<"\n";

    Time t4("Bundesliga", 20, "Bayern de Munchen", "Alemanha", "Bayern de Munchen", "Hannover", "Vinho", "Borussia Dortmund");
    t4.print();
    cout<<"\n";
    
    Time t5("Calcio", 20, "Juventus", "Italia", "Juventus", "Roma", "Grena", "Lazio");
    t5.print();
    cout<<"\n";

    return 0;
}