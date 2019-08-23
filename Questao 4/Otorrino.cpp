#include "Otorrino.h"

#include <iostream>

Otorrino::Otorrino()
{
    //ctor
}


Otorrino::Otorrino(string nome, float altura, float peso)
{
    setNome(nome);
    setAltura(altura);
    setPeso(peso);
    setEspecializacao("Otorrinolaringologia");
}

void Otorrino::setEspecializacao(string especializacao)
{
    this->especializacao = "Otorrinolaringologia";
}

string Otorrino::getEspecializacao()
{
    return especializacao;
}

void Otorrino::RealizaCirurgia(){
    cout << "Em cirurgia ouricular. " << endl;
}
