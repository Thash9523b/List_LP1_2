#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
    ZeraPedidos();
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p1)
{
    for(int i=0 ; i<MAX ; i++){
        if(p1.getDescricao() == pedido[i].getDescricao()){
            pedido[i].setQuant(pedido[i].getQuant()+p1.getQuant());
            return;
        }
    }

    for(int i=0 ; i<MAX ; i++){
        if(pedido[i].getNum() == 0){
            pedido[i] = p1;
            break;
        }
    }
}

void MesaDeRestaurante::ZeraPedidos()
{
    for(int i=0 ; i<MAX ; i++){
        pedido[i].setDescricao("");
        pedido[i].setNum(0);
        pedido[i].setPreco(0);
        pedido[i].setQuant(0);
    }
}

double MesaDeRestaurante::CalculaTotal()
{
    double soma = 0;

    for(int i=0 ; i<MAX ; i++){
        soma += pedido[i].getPreco() * pedido[i].getQuant();
    }

    return soma;
}
