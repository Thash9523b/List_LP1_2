#include "Assalariado.h"

#include <sstream>

using namespace std;

Assalariado::Assalariado()
{
    nome = " ";
    matricula = salario = 0;
}

Assalariado::Assalariado(int matricula, string nome, double salario)
{
    setMatricula(matricula);
    setNome(nome);
    setSalario(salario);
}

void Assalariado::setSalario(double salario)
{
    if(salario>0)
        this->salario = salario;
    else
        this->salario = 0;
}

double Assalariado::getSalario()
{
    return salario;
}

double Assalariado::calculaSalario(double salario)
{
    return salario;
}

string Assalariado::toString(){
    stringstream resumo;

    resumo << "\nAssalariado\n" << endl
           << "Nome: " << nome << endl
           << "Matricula: " << matricula << endl
           << "Salario: " << salario << endl;

    return resumo.str();
}
