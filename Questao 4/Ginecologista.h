#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H

#include "Medico.h"


class Ginecologista : public Medico
{
    public:
        Ginecologista();
        Ginecologista(string nome, float altura, float peso);

        void setEspecializacao(string especializacao);
        string getEspecializacao();

        void RealizaCirurgia();

    protected:

    private:
};

#endif // GINECOLOGISTA_H
