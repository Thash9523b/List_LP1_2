#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H

#include <iostream>
#include <exception>

class ValorAbaixoException : public std::exception
{
    public:
        ValorAbaixoException();
        ~ValorAbaixoException();

        virtual std::string what();

    private:

        std::string error = "Numero maior ou igual a zero.";
};

#endif // VALORABAIXOEXCEPTION_H
