#include "Comissionado.h"

#include <sstream>

using namespace std;

Comissionado::Comissionado()
{
    nome = " ";
    matricula = percentualDeComissao = vendasSemanais = 0;
}

Comissionado::Comissionado(int matricula, string nome, double salario, double percentualDeComissao, double vendasSemanais)
{
    setNome(nome);
    setMatricula(matricula);
    setSalario(salario);
    setPercentualDeComissao(percentualDeComissao);
    setVendasSemanais(vendasSemanais);
}


void Comissionado::setSalario(double salario)
{
    if(salario>0)
        this->salario = salario;
    else
        this->salario = 0;
}

void Comissionado::setPercentualDeComissao(double percentualDeComissao)
{
    if(percentualDeComissao>0)
        this->percentualDeComissao = percentualDeComissao;
    else
        this->percentualDeComissao = 0;
}

void Comissionado::setVendasSemanais(double vendasSemanais)
{
    if(vendasSemanais>0)
        this->vendasSemanais = vendasSemanais;
    else
        this->vendasSemanais = 0;
}

double Comissionado::getSalario()
{
    return salario;
}

double Comissionado::getPercentualDeComissao()
{
    return percentualDeComissao;
}

double Comissionado::getVendasSemanais()
{
    return vendasSemanais;
}

double Comissionado::calculaSalario(double percentualDeComissao, double vendasSemanais)
{
    return salario + (vendasSemanais *(percentualDeComissao/100));
}

string Comissionado::toString(){
    stringstream resumo;

    resumo << "\nComissionado\n" << endl
           << "Nome: " << nome << endl
           << "Matricula: " << matricula << endl
           << "Salario base: " << salarioBase << endl
           << "Vendas semanais: " << vendasSemanais << endl
           << "Percentual de comissao: " << percentualComissao << endl
           << "Salario mensal: " << CalcularSalario() << endl;

    return resumo.str();
}
