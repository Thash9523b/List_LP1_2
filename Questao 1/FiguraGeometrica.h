#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <string>
using namespace std;


class FiguraGeometrica
{
    public:
        FiguraGeometrica();

        string getNome();

        virtual double CalculaArea() = 0;

    protected:

        string nome;

};

#endif // FIGURAGEOMETRICA_H
