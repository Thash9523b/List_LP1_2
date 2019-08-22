#ifndef QUADRADO_H
#define QUADRADO_H

#include "FiguraGeometrica.h"


class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado();
        Quadrado(double lado);

        void setLado(double lado);

        double getLado();

        double CalculaArea();

    private:
        double lado;
};

#endif // QUADRADO_H
