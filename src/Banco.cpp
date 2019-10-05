#include "../include/Banco.h"
#include <iostream>
#include <map>
Banco::Banco(string nomeBanco){
    setNomeBanco(nomeBanco);
}

Banco::~Banco(){
    //dtor
}

void Banco::inserirCliente(Cliente cliente){
    clientes.insert(make_pair(cliente.getCpfCnpj(), cliente));
}

map<string, Cliente> Banco::getClientes(){
    return clientes;
}

void Banco::criarConta(Cliente cliente){
    Conta c(cliente);
    contas.emplace(c.getNumConta(),c);
}

map<int, Conta> Banco::getContas(){
    return contas;
}

void Banco::excluiCliente(string cpf_cnpj){
    /* Cliente aux = clientes.find(cpf_cnpj);
    if( /*aux != clientes.end() && contas.end() == contas.find(aux.getNumConta()))
        clientes.erase(aux);
    else
        cout << "Não existe conta relacionada ao documento de número: " << cpf_cnpj << endl; */
}

void Banco::excluirConta(int numConta){

    contas.erase(contas.find(numConta));
}

void Banco::depositoConta(int numConta, double valor){
    contas.find(numConta)->second.creditarConta(valor, "deposito");
}

void Banco::saqueConta(int numConta, double valor){
    contas.find(numConta)->second.debitarConta(valor, "saque");
}

void Banco::transferenciaConta(int numContaOrigem,int numContaDestino, double valor){
    Conta origem = contas.find(numContaOrigem)->second;
    Conta destino = contas.find(numContaDestino)->second;
    if((origem.getSaldo()-valor) >= 0){
        origem.debitarConta(valor, ("Transferência para conta " + to_string(numContaDestino) + "."));
        origem.setSaldo(1);
        destino.creditarConta(valor, ("Transferência da conta " + to_string(numContaOrigem) + "."));
    }else
        cout << "Saldo insuficiente! " << endl;
}

void Banco::debitoTarifa(){
    for (pair<int, Conta> conta : contas){
        conta.second.debitarConta(15, "Cobrança de tarifa");
	}
}

void Banco::debitoCpmf(){
    for (pair<int, Conta> conta : contas){
        list<Movimentacao> mov = conta.second.extratoConta();
        double somaDoDebito = 0;
        for (auto & i : mov) {
            if(i.getDebitoCredito()== 'D')
                somaDoDebito = i.getValor();
        }
        conta.second.debitarConta(double((0.38*somaDoDebito)),"Cobrança de CPMF");
	}
}

double Banco::getSaldo(int numConta){
    return contas.find(numConta)->second.getSaldo();
}

list<Movimentacao> Banco::extratoBancario(int numConta){
    //TÁ ERRADO
    return contas.find(numConta)->second.extratoConta();
}


list<Movimentacao> Banco::extratoBancario(int numConta, string dataInicio){
    return contas.find(numConta)->second.extratoConta(dataInicio);
}

list<Movimentacao> Banco::extratoBancario(int numConta, string dataInicio, string dataFinal){
    return contas.find(numConta)->second.extratoConta(dataInicio, dataFinal);
}

void Banco::salvarDados(){

}

void Banco::obterDados(){

}

