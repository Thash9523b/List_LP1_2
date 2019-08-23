
#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H

#include <iostream>
#include <exception>

using namespace std;

class FuncionarioNaoExisteException : public exception{
    public:
        FuncionarioNaoExisteException();
        ~FuncionarioNaoExisteException();

        virtual std::string what();
    private:
        std::string erro = "Funcionario nao existe!";
};

#endif
