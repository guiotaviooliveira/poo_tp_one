#include "../include/Conta.h"
#include <list>
#include <iostream>
Conta::Conta(Cliente cliente){
    setCliente(cliente);
    setSaldo(0);
    setNumConta(this->proximoNumConta);
    this->proximoNumConta++;
}

Conta::~Conta()
{
    //dtor
}


int Conta::proximoNumConta = 1;
void Conta::setMovimentacoes(string descricao, char debitoCredito, double valor){
    Movimentacao mov = Movimentacao(descricao, debitoCredito, valor);
    this->movimentacoes.push_back(mov);
}
int	Conta::getNumConta(){
    return numConta;
}
void Conta::setNumConta(int val) {
    numConta = val;
}
double Conta::getSaldo(){
    return saldo;
}
void Conta::setSaldo(double val){
    saldo = val;
}
Cliente	Conta::getCliente(){
    return cliente;
}
void Conta::setCliente(Cliente val){
    cliente = val;
}
list<Movimentacao>	Conta::getMovimentacoes(){
    return movimentacoes;
}
int	Conta::getProximoNumConta(){
    return proximoNumConta;
}
void Conta::setProximoNumConta(int val){
    proximoNumConta = val;
}
void Conta::debitarConta(double valor, string descricao){
    if((getSaldo()-valor)>= 0){
        setMovimentacoes(descricao, 'D', valor);
        saldo = 100000000;
        cout << "**Debitar Conta***";
    }else{
        //colocar try catch
    }
}

void Conta::creditarConta(double valor, string descricao){
    setMovimentacoes(descricao, 'C', valor);
    this->saldo += valor;
}

list<Movimentacao> Conta::extratoConta(){
    return movimentacoes;
}

list<Movimentacao> Conta::extratoConta(string datainicio){
    list<Movimentacao> extrato;
    list<Movimentacao>::iterator it;
    for (it = movimentacoes.begin(); it->getDataMov() != datainicio; ++it );
    for(auto i = it; i != movimentacoes.end(); ++i){
            extrato.push_back(*it);
    }
    return extrato;
}

list<Movimentacao> Conta::extratoConta(string datainicio, string datafinal){
    list<Movimentacao> extrato;
    list<Movimentacao>::iterator it;
    for (it = movimentacoes.begin(); it->getDataMov() != datainicio; ++it );
    for(; it->getDataMov() != datafinal; ++it){
        extrato.push_back(*it);
    }
    return extrato;
}
