#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#define MAX 4

#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "FuncionarioNaoExisteException.h"

class SistemaGerenciaFolha
{
    public:
         SistemaGerenciaFolha();

         void setFuncionarios(Funcionari *funcio);

        double calculaValorTotalFolha();
        double consultaSalarioFuncionario(int matricula);


    protected:

    private:
        Funcionari *funcionarios[MAX];
};

#endif // SISTEMAGERENCIAFOLHA_H
