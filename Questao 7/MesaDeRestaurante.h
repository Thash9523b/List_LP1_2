#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#define MAX 100


class MesaDeRestaurante
{
    public:

        MesaDeRestaurante();

        void adicionaAoPedido(Pedido p1);
        void ZeraPedidos();
        double CalculaTotal();


    protected:

    private:

        Pedido pedido [MAX];
};

#endif // MESADERESTAURANTE_H
