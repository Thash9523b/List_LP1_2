#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo();
        Triangulo(double base, double altura);

        void setBase(double base);
        void setLado(double altura);

        double getBase();
        double getAltura();

        double CalculaArea();

    private:

        double base, altura;
};

#endif // TRIANGULO_H
