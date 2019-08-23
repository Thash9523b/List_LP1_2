#ifndef ICONTA_H
#define ICONTA_H


class IConta
{
    public:
        IConta();

        virtual void Sacar(double valor) = 0 ;
        virtual void Depositar(double valor) = 0;
};

#endif // ICONTA_H
