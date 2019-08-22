#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    nomeCliente = numeroDaConta = " ";
    salarioMensal = saldo = 0;
}

ContaEspecial::ContaEspecial(string nomeCliente, double salarioMensal, string numeroDaConta, double saldo)
{
    setNomeCliente(nomeCliente);
    setSalarioMensal(salarioMensal);
    setNumeroDaConta(numeroDaConta);
    setSaldo(saldo);
}


void ContaEspecial::DefinirLimite()
{
    limite = 3 * salarioMensal;
}
