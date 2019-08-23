#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H

#include "Medico.h"

class Oftalmologista : public Medico
{
    public:
        Oftalmologista();
        Oftalmologista(string nome, float altura, float peso);

        void setEspecializacao(string especializacao);
        string getEspecializacao();

        void RealizaCirurgia();

    protected:

    private:
};

#endif // OFTALMOLOGISTA_H
