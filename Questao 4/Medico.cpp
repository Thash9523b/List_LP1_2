#include "Medico.h"

#include <string>

using namespace std;

Medico::Medico()
{
    nome = " ";
    especializacao = "nda";
    altura = peso = 0;
}

void Medico::setNome(string nome)
{
    this->nome = nome;
}

void Medico::setAltura(float altura)
{
    altura>=0 ? this->altura = altura : this->altura = 0;
}

void Medico::setPeso(float peso)
{
    peso>=0 ? this->peso = peso : this->peso = 0;
}

string Medico::getNome()
{
    return nome;
}

float Medico::getPeso()
{
    return peso;
}

float Medico::getAltura()
{
    return altura;
}

void Medico::RealizaCirurgia()
{

}


void Medico::setEspecializacao(string especializacao)
{

}

string Medico::getEspecializacao()
{

}



