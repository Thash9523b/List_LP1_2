#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H

#include <iostream>
#include <exception>

class ValorAcimaException : public std::exception
{
    public:
        ValorAcimaException();
        ~ValorAcimaException();

        virtual std::string what();

    private:
        std::string error = "Numero maior que cem e menor que mil.";
};

#endif // VALORACIMAEXCEPTION_H
