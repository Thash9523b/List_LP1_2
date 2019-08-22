#include <iostream>

#include "Circulo.h"
#include "Triangulo.h"
#include "Quadrado.h"

using namespace std;

int main()
{
    FiguraGeometrica *f1 = new Circulo(4);
    FiguraGeometrica *f2 = new Triangulo(4, 9);
    FiguraGeometrica *f3 = new Quadrado(7);

    cout << "Nome da Figura: " << f1->getNome() << "\nArea: " << f1->CalculaArea() << endl;
    cout << "Nome da Figura: " << f2->getNome() << "\nArea: " << f2->CalculaArea() << endl;
    cout << "Nome da Figura: " << f3->getNome() << "\nArea: " << f3->CalculaArea() << endl;

    return 0;

}
