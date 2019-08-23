#include "FuncionarioNaoExisteException.h"

FuncionarioNaoExisteException::FuncionarioNaoExisteException(){
}

FuncionarioNaoExisteException::~FuncionarioNaoExisteException(){
}

std::string FuncionarioNaoExisteException::what(){
    return erro;
}
