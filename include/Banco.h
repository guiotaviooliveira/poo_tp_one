#ifndef BANCO_H
#define BANCO_H

#include <map>
#include <string>
#include <fstream>

#include "../include/Conta.h"
#include "../include/Cliente.h"

using namespace std;

class Banco {
    public:
        Banco(string nomeBanco);
        virtual ~Banco();

        string 	getNomeBanco() { return nomeBanco; }
        void 	setNomeBanco(string val) { nomeBanco = val; }
        void	inserirCliente(Cliente cliente);
        map<string, Cliente>	getClientes();
        void	criarConta(Cliente cliente);
        map<int, Conta>	getContas();
        void	excluiCliente(string cpf_cnpj);
        void	excluirConta(int numConta);
        void	depositoConta(int numConta, double valor);
        void	saqueConta(int numConta, double valor);
        void	transferenciaConta(int numContaOrigem, int numContaDestino, double valor);
        void	debitoTarifa();
        void	debitoCpmf();
        double	getSaldo(int numConta);
        list<Movimentacao>	extratoBancario(int numConta);
        list<Movimentacao>	extratoBancario(int numConta, string dataInicio);
        list<Movimentacao>	extratoBancario(int numConta, string dataInicio, string dataFinal);
        void	salvarDados();
        void	obterDados();
    private:
        string	nomeBanco;
        map<int, Conta> contas;
        map<string, Cliente> clientes;
};

#endif // BANCO_H
