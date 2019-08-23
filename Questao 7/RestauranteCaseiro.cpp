#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    for(int i=0 ; i<MAX ; i++){
        mesa[i].ZeraPedidos();
    }
}

void RestauranteCaseiro::adicionaMesa(MesaDeRestaurante m1)
{
    for(int i=0 ; i<MAX ; i++){
        if(mesa[i].CalculaTotal() == 0){
            mesa[i] = m1;
            break;
        }
    }
}

void RestauranteCaseiro::adicionaAoPedido(Pedido p1, int nMesa)
{
    if(nMesa >= 0 && nMesa < MAX)
        mesa[nMesa].adicionaAoPedido(p1);
}

double RestauranteCaseiro::CalculaTotalRestaurante()
{
    double total = 0;

    for(int i=0 ; i<MAX ; i++){
        total += mesa[i].CalculaTotal();
    }

    return total;
}
