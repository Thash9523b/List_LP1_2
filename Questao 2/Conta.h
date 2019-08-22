#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <string>

using namespace std;

class Conta
{
    public:

        Conta();
        Conta(string nomeCliente, double salarioMensal, string numeroDaConta, double saldo);

        void setNomeCliente(string nomeCliente);
        void setNumeroDaConta(string numeroDaConta);
        void setSalarioMensal(double salarioMensal);
        void setSaldo(double saldo);
        void setLimite(double limite);

        string getNomeCliente();
        string getNumeroDaConta();
        double getSalarioMensal();
        double getSaldo();
        double getLimite();

        void DefinirLimite();
        void Depositar(double valor);
        void Sacar(double sacar);


    protected:
        string nomeCliente, numeroDaConta;
        double salarioMensal, saldo, limite;

};

#endif // CONTA_H
