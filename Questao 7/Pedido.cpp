#include "Pedido.h"

Pedido::Pedido()
{
    num = 0;
    descricao = " ";
    quant = 0;
    preco = 0.0;
}

Pedido::Pedido(int num, string descricao, int quant, float preco)
{
    setNum(num);
    setDescricao(descricao);
    setQuant(quant);
    setPreco(preco);
}

void Pedido::setNum(int num)
{
    this->num = num;
}

void Pedido::setDescricao(string descricao)
{
    this->descricao = descricao;
}

void Pedido::setQuant(int quant)
{
    this->quant = quant;
}

void Pedido::setPreco(float preco)
{
    this->preco = preco;
}

int Pedido::getNum()
{
    return num;
}

string Pedido::getDescricao()
{
    return descricao;
}

int Pedido::getQuant()
{
    return quant;
}

float Pedido::getPreco()
{
    return preco;
}

