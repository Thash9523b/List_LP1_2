#include <iostream>

#include "TestaValidaNumero.h"

using namespace std;

int main()
{

    TestaValidaNumero n1;

    for(int i=-600; i<= 1500 ; i+=500){
        try{
            n1.validaNumero(i);
        }catch(ValorAbaixoException exp){
            cerr << exp.what() << endl;
        }catch(ValorAcimaException exp){
            cerr << exp.what() << endl;
        }catch(ValorMuitoAcimaException exp){
            cerr << exp.what() << endl;
        }
    }

    return 0;
}
