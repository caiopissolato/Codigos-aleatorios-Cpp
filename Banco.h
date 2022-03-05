#include <string>

class Banco{
    private:
        std::string nome;
        int num;
        int cpf;

    public:
        Banco();
        Banco(std::string aNome, int aNum, int aCpf);
        void setNome(std::string aNome);
        void setNum(int aNum);
        void setCpf(int aCpf);

        std::string getNome();
        int getNum();
        int getCpf();

        void print();
};