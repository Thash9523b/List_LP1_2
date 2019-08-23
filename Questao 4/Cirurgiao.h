#ifndef CIRURGIAO_H
#define CIRURGIAO_H

#include "Medico.h"

class Cirurgiao : public Medico
{
    public:
        Cirurgiao();
        Cirurgiao(string nome, float altura, float peso);

        void setEspecializacao(string especializacao);
        string getEspecializacao();

        void RealizaCirurgia();


    protected:

    private:
};

#endif // CIRURGIAO_H
