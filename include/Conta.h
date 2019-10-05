#ifndef CONTA_H
#define CONTA_H

#include <list>
#include <string>

#include "../include/Movimentacao.h"
#include "../include/Cliente.h"

using namespace std;

class Conta {
    public:

        Conta(Cliente cliente);
        virtual ~Conta();

	int	getNumConta();
        void	setNumConta(int val);
        double	getSaldo();
        void	setSaldo(double val);
        Cliente	getCliente();
        void	setCliente(Cliente val);
        list<Movimentacao>	getMovimentacoes();
        void	setMovimentacoes(string descricao, char debitoCredito, double valor);
        static int	getProximoNumConta();
        void	setProximoNumConta(int val);
        void	debitarConta(double valor, string descricao);
        void	creditarConta(double valor, string descricao);
        list<Movimentacao>	extratoConta();
        list<Movimentacao>	extratoConta(string datainicio);
        list<Movimentacao>	extratoConta(string datainicio, string datafinal);
    private:
        int numConta;
        double saldo;
        Cliente cliente;
        list<Movimentacao> movimentacoes;
        static int proximoNumConta;
};

#endif // CONTA_H
