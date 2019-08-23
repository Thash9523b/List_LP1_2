#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include <string>
#include "Funcionari.h"

using namespace std;

class Assalariado : public Funcionari
{
    public:
        Assalariado();
        Assalariado(int matricula, string nome, double salario);

        void setSalario(double salario);

        double getSalario();

        double calculaSalario(double salario);


        virtual std::string toString();

    protected:
        double salario;

};

#endif // ASSALARIADO_H
