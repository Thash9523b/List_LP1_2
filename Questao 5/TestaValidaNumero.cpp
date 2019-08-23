#include "TestaValidaNumero.h"

TestaValidaNumero::TestaValidaNumero()
{

}

TestaValidaNumero::~TestaValidaNumero()
{

}

void TestaValidaNumero::validaNumero(int num)
{
    if(num<=0){
        throw ValorAbaixoException();
    }else if(num>0 && num<1000){
        throw ValorAcimaException();
    }else if(num >= 1000){
        throw ValorMuitoAcimaException();
    }else{
        cout << "Invalido!" << endl;
    }
}
