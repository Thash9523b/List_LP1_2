#ifndef FUNCIONARI_H
#define FUNCIONARI_H

#include <string>

using namespace std;



class Funcionari
{
    public:
        Funcionari();

        void setNome(string nome);
        void setMatricula(int matricula);

        string getNome();
        int getMatricula();

        virtual double calculaSalario() = 0;
        virtual std::string toString() = 0;

    protected:
        string nome;
        int matricula;

    private:
};

#endif // FUNCIONARI_H
