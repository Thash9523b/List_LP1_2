#include <iostream>

#include "ContaEspecial.h"

using namespace std;

int main()
{
    Conta *c1 = new Conta();
    ContaEspecial *ce1 = new ContaEspecial();

    c1->Depositar(10000);
    ce1->Depositar(15000);

    cout << "Saldo da primeira conta: R$" << c1->getSaldo() << endl;
    cout << "Saldo da conta especial: R$" << ce1->getSaldo() << endl << endl;

    c1->Sacar(3000);
    ce1->Sacar(5000);

    cout << "Saldo da primeira conta pos saque: R$" << c1->getSaldo() << endl;
    cout << "Saldo da conta especial por saque: R$" << ce1->getSaldo() << endl << endl;

    c1->setSalarioMensal(3000);
    ce1->setSalarioMensal(4000);
    c1->DefinirLimite();
    ce1->DefinirLimite();

    cout << "Limite da primeira conta: R$" << c1->getLimite() << endl;
    cout << "Limite da conta especial: R$" << ce1->getLimite() << endl << endl;



    return 0;
}
