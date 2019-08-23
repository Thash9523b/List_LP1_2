#include <iostream>

#include "Cirurgiao.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
#include "Ginecologista.h"

using namespace std;

int main()
{
    Medico *m1 = new Cirurgiao("Lineide", 1.65, 65);
    Medico *m2 = new Ginecologista("Lineide", 1.67, 72);
    Medico *m3 = new Oftalmologista("Lindiberg", 1.80 , 80);
    Medico *m4 = new Otorrino("Lidesio", 1.85 , 90);


    cout << "Especializacao: "<< m1->getEspecializacao() << "\nNome: " << m1->getNome() << "\nAltura: "
         << m1->getAltura() << "\nPeso: " << m1->getPeso() << "/n" << m1->RealizaCirurgia() << endl << endl;

    cout << "Especializacao: "<< m2->getEspecializacao() <<"\nNome: " << m2->getNome()  << "\nAltura: "
         << m2->getAltura() << "\nPeso: " << m2->getPeso() << "/n" << m2->RealizaCirurgia() << endl << endl;

    cout << "Especializacao: "<< m3->getEspecializacao() <<"\nNome: " << m3->getNome()  << "\nAltura: "
         << m3->getAltura() << "\nPeso: " << m3->getPeso() << "/n" << m3->RealizaCirurgia() << endl << endl;

    cout << "Especializacao: "<< m4->getEspecializacao() <<"\nNome: " << m4->getNome()  << "\nAltura: "
         << m4->getAltura() << "\nPeso: " << m4->getPeso() << "/n" << m4->RealizaCirurgia() << endl << endl;


    return 0;
}
