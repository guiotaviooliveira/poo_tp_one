#include "Cliente.h"

Cliente::Cliente(string nomeCliente, string cpf_cnpj, string endereco, string fone)
{
    this->nomeCliente = nomeCliente;
    this->cpf_cnpj = cpf_cnpj;
    this->endereco = endereco;
    this->fone = fone;
}

Cliente::~Cliente()
{
    //dtor
}
