#ifndef BANCO_H
#define BANCO_H

#include <unordered_map>
#include <string>
#include <fstream>

#include <Conta.h>
#include <Cliente.h>

using namespace std;

class Banco {
    public:
        Banco(string nomeBanco);
        virtual ~Banco();

        string 	getNomeBanco() { return nomeBanco; }
        void 	setNomeBanco(string val) { nomeBanco = val; }
        void	inserirCliente(Cliente cliente);
        unordered_map	getClientes();
        void	criarConta(Cliente cliente);
        unordered_map	getContas();
        void	excluiCliente(string cpf_cnpj);
        void	excluirConta(string numConta);
        void	depositoConta(string numConta, double valor);
        void	saqueConta(string numConta, double valor);
        void	transferenciaConta(string numContaOrigem, string numContaDestino double valor);
        void	debitoTarifa();
        void	debitoCpmf();
        double	getSaldo(string numConta);
        string	extratoBancario(string numConta);
        string	extratoBancario(string numConta, string dataInicio);
        string	extratoBancario(string numConta, string dataInicio, string dataFinal);
        void	salvarDados();
        void	obterDados();
    private:
        string	nomeBanco;
        unordered_map<int, Conta> contas;
        unordered_map<string, Cliente> clientes;
};

#endif // BANCO_H
