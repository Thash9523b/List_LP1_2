#include "Quadrado.h"

Quadrado::Quadrado()
{
    nome = "Quadrado";
    lado = 0;
}

Quadrado::Quadrado(double lado)
{
    nome = "Quadrado";
    setLado(lado);
}

void Quadrado::setLado(double lado)
{
    if(lado>0)
        this->lado = lado;
    else
        this->lado = 0;
}

double Quadrado::getLado()
{
    return lado;
}

double Quadrado::CalculaArea()
{
    return lado * lado;
}
