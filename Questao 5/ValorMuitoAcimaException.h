#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H

#include <iostream>
#include <exception>
#include <string>

class ValorMuitoAcimaException :public std::exception
{
    public:
        ValorMuitoAcimaException();
        ~ValorMuitoAcimaException();

        virtual std::string what();

    private:

        std::string error = "Numero igual ou maior que mil.";
};

#endif // VALORMUITOACIMAEXCEPTION_H
