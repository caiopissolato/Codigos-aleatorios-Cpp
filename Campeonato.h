#include <string>


class Campeonato{
    private:
        std::string nome;
        int num_part;
        std::string atual_camp;
        std::string pais;
        std::string maior_camp;

    public:
        Campeonato();
        Campeonato(std::string aNome, int aNum_Part, std::string aAtual_Camp, std::string aPais, std::string aMaior_Camp);

        std::string getNome();
        int getNum_Part();
        std::string getAtual_Camp();
        std::string getPais();
        std::string getMaior_Camp();

        void setNome(std::string aNome);
        void setNum_Part(int aNum_Part);
        void setAtual_Camp(std::string aAtual_Camp);
        void setPais(std::string aPais);
        void setMaior_Camp(std::string aMaior_Camp);  

        void print();  
};