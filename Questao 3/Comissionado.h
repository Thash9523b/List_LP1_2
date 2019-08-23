#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionari.h"

using namespace std;

class Comissionado : public Funcionari
{
    public:
        Comissionado();
        Comissionado(int matricula, string nome, double salario, double percentualDeComissao, double vendasSemanais);

        void setPercentualDeComissao(double percentualDeComissao);
        void setVendasSemanais(double vendasSemanais);
        void setSalario(double salario);


        double getPercentualDeComissao();
        double getVendasSemanais();
        double getSalario();

        double calculaSalario(double percentualDeComissao, double vendasSemanais);

        virtual std::string toString();

    protected:

    private:
        double salario, percentualDeComissao, vendasSemanais;
};

#endif // COMISSIONADO_H
