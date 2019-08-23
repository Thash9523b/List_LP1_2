#include "ValorMuitoAcimaException.h"

ValorMuitoAcimaException::ValorMuitoAcimaException()
{
    //ctor
}

ValorMuitoAcimaException::~ValorMuitoAcimaException()
{
    //dtor
}

std::string ValorMuitoAcimaException::what()
{
    return error;
}
