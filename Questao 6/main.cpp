#include <iostream>

#include "Conta.h"

using namespace std;

int main()
{
    Conta *c1 = new Conta();

    c1->setSaldo(5000);

    try{
        c1->sacar(6000);
    }catch(SaldoNaoDisponivelException exp){
        std::cerr << exp.what() << endl;
    }
}
