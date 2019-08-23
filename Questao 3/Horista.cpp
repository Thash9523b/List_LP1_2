#include "Horista.h"

using namespace std;

Horista::Horista()
{
    nome = " ";
    matricula = salarioPorHora = horasTrabalhadas = 0;
}

Horista::Horista(int matricula, string nome, double horasTrabalhadas, double salarioPorHora)
{
    setMatricula(matricula);
    setNome(nome);
    setSalarioPorHora(salarioPorHora);
    setHorasTrabalhadas(horasTrabalhadas);
}


void Horista::setHorasTrabalhadas(double horasTrabalhadas)
{
    if(horasTrabalhadas > 0)
        this->horasTrabalhadas = horasTrabalhadas;
    else
        this->horasTrabalhadas = 0;
}

void Horista::setSalarioPorHora(double salarioPorHora)
{
    if(salarioPorHora > 0)
        this->salarioPorHora = salarioPorHora;
    else
        this->salarioPorHora = 0;
}

double Horista::getHorasTrabatradas()
{
    return horasTrabalhadas;
}

double Horista::getSalarioPorHora()
{
    return salarioPorHora;
}

double Horista::calculaSalario(double horasTrabalhadas, double salarioPorHora, double salario)
{
    if(horasTrabalhadas > 40){
        return (salarioPorHora * 40) + (horasTrabalhadas - 40) * (salarioPorHora * 1,5) * 4;
    }else{
        return salarioPorHora * horasTrabalhadas * 4;
    };
}

string Horista::toString()
{
    stringstream resumo;

    resumo << "\nHorista\n" << endl
           << "Nome: " << nome << endl
           << "Matricula: " << matricula << endl
           << "Salario por hora: " << salarioPorHora << endl
           << "Horas trabalhadas: " << horasTrabalhadas << endl
           << "Salario mensal: " << CalcularSalario() << endl;

    return resumo.str();
}
}



