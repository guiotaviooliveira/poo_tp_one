#include "Conta.h"

Conta::Conta(Conta cliente)
{
    setCliente(cliente);
    setSaldo(0);
    setNumConta(this->proximoNumConta);
    this->proximoNumConta++;
}

Conta::~Conta()
{
    //dtor
}
void	setMovimentacoes(string descricao, char debitoCredito, double valor){
    Movimentacao mov = Movimentacao(descricao, debitoCredito, valor);
    movimentacoes.insert(make_pair(numConta, mov));
}
void Conta::debitarConta(double valor, string descricao){
    if(getSaldo()-valor)!= 0)}{
        setMovimentacoes(descricao, 'D', valor);
        this->saldo -= valor;
    }else{
        //colocar try catch
    }
}

void Conta::creditarConta(double valor, string descricao){
    setMovimentacoes(descricao, 'C', valor);
    this->saldo -= valor;
}

string Conta::extratoConta(){

}

string Conta::extratoConta(string datainicio){

}

string Conta::extratoConta(string datainicio, string datafinal){

}
