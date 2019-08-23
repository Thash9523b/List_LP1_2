#include "RestauranteCaseiro.h"
#include <iostream>


using namespace std;

int main()
{
    Pedido p1(1, "Sorvete", 2, 2.5);
    Pedido p2(2, "Milkshake", 1, 8);
    Pedido p3(3, "Sundae", 3, 5);

    cout << "Numero do Pedido: " << p1.getNum() << "\nDescricao: " << p1.getDescricao()
         << "\nQuantidade: " << p1.getQuant() << "\nPreco: R$" << p1.getPreco() << endl;
    cout << "Numero do Pedido: " << p2.getNum() << "\nDescricao: " << p2.getDescricao()
         << "\nQuantidade: " << p2.getQuant() << "\nPreco: R$" << p2.getPreco() << endl;
    cout << "Numero do Pedido: " << p3.getNum() << "\nDescricao: " << p3.getDescricao()
         << "\nQuantidade: " << p3.getQuant() << "\nPreco: R$" << p3.getPreco() << endl << endl;

    MesaDeRestaurante m1;
    MesaDeRestaurante m2;

    m1.adicionaAoPedido(p1);
    m1.adicionaAoPedido(p2);

    m2.adicionaAoPedido(p2);
    m2.adicionaAoPedido(p3);
    m2.adicionaAoPedido(p3);

    cout << "Valor total da mesa 1: R$" << m1.CalculaTotal() << endl;
    cout << "Valor total da mesa 2: R$" << m2.CalculaTotal() << endl << endl;

    RestauranteCaseiro r1;

    r1.adicionaMesa(m1);
    r1.adicionaMesa(m2);

    cout << "Total do Restaurante: R$" << r1.CalculaTotalRestaurante() << endl;


}
