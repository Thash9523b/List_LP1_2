#include "ValorAbaixoException.h"

ValorAbaixoException::ValorAbaixoException()
{
    //ctor
}

ValorAbaixoException::~ValorAbaixoException()
{
    //dtor
}

std::string ValorAbaixoException::what()
{
    return error;
}
