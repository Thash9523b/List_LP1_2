#include "Ginecologista.h"
#include <iostream>

Ginecologista::Ginecologista()
{

}

Ginecologista::Ginecologista(string nome, float altura, float peso)
{
    setNome(nome);
    setAltura(altura);
    setPeso(peso);
    setEspecializacao("Ginecologia");
}

void Ginecologista::setEspecializacao(string especializacao)
{
    this->especializacao = "Ginecologia";
}

string Ginecologista::getEspecializacao()
{
    return especializacao;
}

void Ginecologista::RealizaCirurgia()
{
     cout << "Em cirurgia intima." << endl;
}
