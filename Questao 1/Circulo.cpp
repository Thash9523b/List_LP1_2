#include "Circulo.h"
#define PI 3.14

Circulo::Circulo()
{
    nome = "Circulo";
    raio = 0;
}

Circulo::Circulo(double raio)
{
    nome = "Circulo";
    setRaio(raio);
}

void Circulo::setRaio(double raio)
{
    if(raio>0)
        this->raio = raio;
    else
        this->raio = 0;
}

double Circulo::CalculaArea()
{
    return PI*(raio * raio);
}
