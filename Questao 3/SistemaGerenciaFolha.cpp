#include "SistemaGerenciaFolha.h"



SistemaGerenciaFolha::SistemaGerenciaFolha()
{
    //ctor
}

void SistemaGerenciaFolha::setFuncionarios(Funcionari *funcio)
{
   int i=0;
        funcionarios[i]=funcio;
        i++;
}

double SistemaGerenciaFolha::calculaValorTotalFolha()
{
    double valorFinal = 0;

    for (int i=0; i<=MAX ; i++){
        valorFinal += funcionarios[i]->calculaSalario();
    }

    return valorFinal;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(int matricula)
{
    for(int i=0; i<MAX; i++){
        if(funcionarios[i]->getMatricula()==matricula)
            return funcionarios[i]->calculaSalario();
    }

    throw FuncionarioNaoExisteException();

    return -1;
}
