#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionari.h"

using namespace std;

class Horista : public Funcionari
{
    public:
        Horista();
        Horista(int matricula, string nome, double horasTrabalhadas, double salarioPorHora);

        void setHorasTrabalhadas(double horasTrabalhadas);
        void setSalarioPorHora(double salarioPorHora);

        double getHorasTrabatradas();
        double getSalarioPorHora();

        double calculaSalario(double horasTrabalhadas, double salarioPorHora, double salario);

        virtual string toString();

    private:

        double salarioPorHora, horasTrabalhadas;
};

#endif // HORISTA_H
