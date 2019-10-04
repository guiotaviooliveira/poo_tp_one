#include "Movimentacao.h"

Movimentacao::Movimentacao(string descricao, char debitoCredito, double valor)
{
    this->debitoCredito = debitoCredito;
    this->descricao = descricao;
    this->valor = valor;
    this->dataMov = time();
}

Movimentacao::~Movimentacao()
{

}
