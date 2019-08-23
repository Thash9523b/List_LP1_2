#include "Cirurgiao.h"
#include <iostream>

Cirurgiao::Cirurgiao()
{

}

Cirurgiao::Cirurgiao(string nome, float altura, float peso)
{
    setNome(nome);
    setAltura(altura);
    setPeso(peso);
    setEspecializacao("Cirurgia");
}

void Cirurgiao::setEspecializacao(string especializacao)
{
    this->especializacao = especializacao;
}

string Cirurgiao::getEspecializacao()
{
    return especializacao;
}

void Cirurgiao::RealizaCirurgia(){
    cout << "Em cirurgia." << endl;
}

