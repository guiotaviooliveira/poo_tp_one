#ifndef CONTA_H
#define CONTA_H

#include <unordered_map>
#include <string>

#include <Movimentacao.h>
#include <Cliente.h>

class Conta {
    public:

        Conta(Cliente cliente);
        virtual ~Conta();

	int	getNumConta() { return numConta; }
        void	setNumConta(int val) { numConta = val; }
        double	getSaldo() { return saldo; }
        void	setSaldo(double val) { saldo = val; }
        Cliente	getCliente() { return cliente; }
        void	setCliente(Cliente val) { cliente = val; }
        unordered_map	getMovimentacoes() { return movimentacoes; }
        void	setMovimentacoes(string descricao, char debitoCredito, double valor);
        static int		getProximoNumConta() { return proximoNumConta; }
        void	setProximoNumConta(static int val) { proximoNumConta = val; }
        void	debitarConta(double valor, string descricao);
        void	creditarConta(double valor, string descricao);
        string	extratoConta();
        string	extratoConta(string datainicio);
        string	extratoConta(string datainicio, string datafinal);
    private:
        int numConta;
        double saldo;
        Cliente cliente;
        unordered_map< int, Movimentacao> movimentacoes;
        static int proximoNumConta = 1;
};

#endif // CONTA_H
