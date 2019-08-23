#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include "MesaDeRestaurante.h"
#define MAX 100

using namespace std;


class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionaMesa(MesaDeRestaurante m1);
        void adicionaAoPedido(Pedido p1, int nMesa);
        double CalculaTotalRestaurante();

    protected:

    private:
        MesaDeRestaurante mesa[MAX];
};

#endif // RESTAURANTECASEIRO_H
