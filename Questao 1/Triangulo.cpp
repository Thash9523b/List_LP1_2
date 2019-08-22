#include "Triangulo.h"

Triangulo::Triangulo()
{
    nome = "Triangulo";
    base = altura = 0;
}

Triangulo::Triangulo(double base, double altura)
{
    nome = "Triangulo";
    setBase(base);
    setLado(altura);
}

void Triangulo::setBase(double base)
{
    if(base>0)
        this->base = base;
    else
        this->base = 0;
}

void Triangulo::setLado(double altura)
{
    if(altura>0)
        this->altura = altura;
    else
        this->altura = 0;
}

double Triangulo::getBase()
{
    return base;
}

double Triangulo::getAltura()
{
    return altura;
}

double Triangulo::CalculaArea()
{
    return (base*altura)/2;
}
