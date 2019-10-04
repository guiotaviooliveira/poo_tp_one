#include "Banco.h"

Banco::Banco(string nomeBanco){
    setNomeBanco(nomeBanco);
}

Banco::~Banco(){
    //dtor
}

Banco::string getNomeBanco(){
	return nomeBanco;
}

string Banco::getNomeBanco(){
	return nomeBanco;
}

void Banco::setNomeBanco(string val) {
	nomeBanco = val;
}

void Banco::inserirCliente(Cliente cliente){
    clientes.insert(make_pair(cliente.getCpfCnpj(), cliente));
}

list Banco::getClientes(){

}

void Banco::criarConta(Cliente cliente){
    Conta cont(cliente);
    contas.insert(make_pair(cont.getNumConta(), cont);
}

unordered_map Banco::getContas(){

}

void Banco::excluiCliente(string cpf_cnpj){
    Cliente aux = clientes.find(cpf_cnpj);
    if( /*aux != clientes.end() && */contas.end() == contas.find(aux.getNumConta()))
        clientes.erase(aux);
    else
        cout << "Não existe conta relacionada ao documento de número: " << cpf_cnpj << endl;
}

void Banco::excluirConta(string numConta){
    contas.erase(contas.find(numConta));
}

void Banco::depositoConta(string numConta, double valor){
    contas.find(numConta).creditarConta(valor, "deposito");
}

void Banco::saqueConta(string numConta, double valor){
    contas.find(numConta).debitarConta(valor, "saque");
}

void Banco::transferenciaConta(string numContaOrigem,string numContaDestino double valor){
    Conta origem = contas.find(numContaOrigem);
    Conta destino = contas.find(numContaDestino);
    if((origem.getSaldo()-valor) >= 0){
        origem.debitarConta(valor, ("Transferência para conta " + numContaDestino + "."));
        destino.creditarConta(valor, ("Transferência da conta " + numContaOrigem + "."))
    }else
        cout << "Saldo insuficiente! " << endl;
}

void Banco::debitoTarifa(){
    for (pair<int, Conta> conta : contas){
        conta.debitarConta(15, "Cobrança de tarifa");
	}
}

void Banco::debitoCpmf(){

}

double Banco::getSaldo(string numConta){

}

string Banco::extratoBancario(string numConta){

}

string Banco::extratoBancario(string numConta, string dataInicio){

}

string Banco::extratoBancario(string numConta, string dataInicio, string dataFinal){

}

void Banco::salvarDados(){

}

void Banco::obterDados(){

}

