#include "Conta.h"
#include <iostream>
Conta::Conta()
{
    nomeCliente = numeroDaConta = " ";
    salarioMensal = saldo = 0;
}

Conta::Conta(string nomeCliente, double salarioMensal, string numeroDaConta, double saldo)
{
    setNomeCliente(nomeCliente);
    setSalarioMensal(salarioMensal);
    setNumeroDaConta(numeroDaConta);
    setSaldo(saldo);
}

void Conta::setNomeCliente(string nomeCliente)
{
    this->nomeCliente = nomeCliente;
}

void Conta::setNumeroDaConta(string numeroDaConta)
{
    this->numeroDaConta = numeroDaConta;
}

void Conta::setSalarioMensal(double salarioMensal)
{
    if(salarioMensal>0)
        this->salarioMensal = salarioMensal;
    else
        this->salarioMensal = 0;
}

void Conta::setSaldo(double saldo)
{
    if(saldo>0)
        this->saldo = saldo;
    else
        this->saldo = 0;
}

void Conta::setLimite(double limite)
{
    if(limite>0)
        this->limite = limite;
    else
        this->limite = 0;
}

string Conta::getNomeCliente()
{
    return nomeCliente;
}

string Conta::getNumeroDaConta()
{
    return numeroDaConta;
}

double Conta::getSalarioMensal()
{
    return salarioMensal;
}

double Conta::getSaldo()
{
    return saldo;
}

double Conta::getLimite()
{
    return limite;
}

void Conta::DefinirLimite()
{
    limite = salarioMensal * 2;
}

void Conta::Depositar(double valor)
{
    if (valor>0)
        saldo+=valor;
}

void Conta::Sacar(double valor)
{
    if (saldo>0)
        saldo-=valor;
    else
        cout << "Saldo insulficiente." << endl;
}

