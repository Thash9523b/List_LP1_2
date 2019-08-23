#include "ValorAcimaException.h"

ValorAcimaException::ValorAcimaException()
{
    //ctor
}

ValorAcimaException::~ValorAcimaException()
{
    //dtor
}

std::string ValorAcimaException::what()
{
    return error;
}
