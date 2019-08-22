#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"


class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        Circulo(double raio);

        void setRaio(double raio);

        double getRaio();

        double CalculaArea();

    private:
        double raio;
};

#endif // CIRCULO_H
