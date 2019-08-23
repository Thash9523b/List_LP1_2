#include "Funcionari.h"

Funcionari::Funcionari()
{

}

void Funcionari::setNome(string nome)
{
    this-> nome = nome;
}

void Funcionari::setMatricula(int matricula)
{
    if(matricula>0)
        this->matricula = matricula;
    else
        this->matricula = 0;
}

string Funcionari::getNome()
{
    return nome;
}

int Funcionari::getMatricula()
{
    return matricula;
}

double Funcionari::calculaSalario()
{

}

string Funcionari::toString()
{

}
