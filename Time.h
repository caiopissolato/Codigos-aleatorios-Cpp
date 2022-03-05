#ifndef TIME_H
#define TIME_H

#include <string>
#include "Campeonato.h"

class Time: public Campeonato{
    private:
        std::string nome_time;
        std::string cor;
        std::string rival;

    public:
        Time();
        Time(std::string aNome, int aNum_Part, std::string aAtual_Camp, std::string aPais, std::string aMaior_Camp, std::string aNome_Time, std::string aCor, std::string aRival);

        void setNome_Time(std::string aNome_Time);
        void setCor(std::string aCor);
        void setRival(std::string aRival);

        std::string getNome_Time();
        std::string getCor();
        std::string getRival();

        void print();
        
};
#endif