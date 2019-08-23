#include "Oftalmologista.h"
#include <iostream>

Oftalmologista::Oftalmologista()
{
    //ctor
}

Oftalmologista::Oftalmologista(string nome, float altura, float peso)
{
    setNome(nome);
    setAltura(altura);
    setPeso(peso);
    setEspecializacao("Oftamologia");
}

void Oftalmologista::setEspecializacao(string especializacao)
{
    this->especializacao = especializacao;
}

string Oftalmologista::getEspecializacao()
{
    return especializacao;
}


void Oftalmologista::RealizaCirurgia(){
    cout << "Em cirurgia dentaria. " << endl;
}
