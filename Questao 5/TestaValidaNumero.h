#ifndef TESTAVALIDANUMERO_H
#define TESTAVALIDANUMERO_H

#include <iostream>

#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"


class TestaValidaNumero
{
    public:
        TestaValidaNumero();
        virtual ~TestaValidaNumero();

        void validaNumero(int num);

    protected:

    private:
        int num;
};

#endif // TESTAVALIDANUMERO_H
