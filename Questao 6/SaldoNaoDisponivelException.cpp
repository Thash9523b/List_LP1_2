#include "SaldoNaoDisponivelException.h"

SaldoNaoDisponivelException::SaldoNaoDisponivelException()
{
    //ctor
}

SaldoNaoDisponivelException::~SaldoNaoDisponivelException()
{
    //dtor
}

string SaldoNaoDisponivelException::what()
{
    return error;
}
