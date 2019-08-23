#ifndef MEDICO_H
#define MEDICO_H

#include <string>

using namespace std;


class Medico
{
    public:
        Medico();

        void setNome(string nome);
        void setAltura(float altura);
        void setPeso(float peso);


        string getNome();
        float getPeso();
        float getAltura();

        virtual void RealizaCirurgia() = 0;
        virtual void setEspecializacao(string especializacao) = 0;
        virtual string getEspecializacao() = 0;

        //virtual void set

    protected:
        string nome, especializacao;
        float peso, altura;

    private:
};

#endif // MEDICO_H
