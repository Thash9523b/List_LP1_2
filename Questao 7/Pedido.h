#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>
using namespace std;

class Pedido
{
    public:
        Pedido();
        Pedido(int num, string descricao, int quant, float preco);

        void setNum(int num);
        void setDescricao(string descricao);
        void setQuant(int quant);
        void setPreco(float preco);

        int getNum();
        string getDescricao();
        int getQuant();
        float getPreco();


    protected:

    private:
        int num, quant;
        float preco;
        string descricao;
};

#endif // PEDIDO_H
