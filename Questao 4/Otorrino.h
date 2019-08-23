#ifndef OTORRINO_H
#define OTORRINO_H

#include "Medico.h"


class Otorrino : public Medico
{
    public:
        Otorrino();
        Otorrino(string nome, float altura, float peso);

        void setEspecializacao(string especializacao);
        string getEspecializacao();

        void RealizaCirurgia();
    protected:

    private:
};

#endif // OTORRINO_H
