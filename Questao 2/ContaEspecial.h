#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H


#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        ContaEspecial();
        ContaEspecial(string nomeCliente, double salarioMensal, string numeroDaConta, double saldo);

        void DefinirLimite();


    protected:

    private:
};

#endif // CONTAESPECIAL_H
