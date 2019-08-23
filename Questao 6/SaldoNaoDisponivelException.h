#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

#include <exception>
#include <iostream>

using namespace std;

class SaldoNaoDisponivelException : public std::exception
{
    public:
        SaldoNaoDisponivelException();
        virtual ~SaldoNaoDisponivelException();

        virtual std::string what();

    protected:

    private:
        std::string error = "Saldo indisponivel!";
};

#endif // SALDONAODISPONIVELEXCEPTION_H
