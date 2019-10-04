#ifndef MOVIMENTACAO_H
#define MOVIMENTACAO_H

#include <ctime>
#include <string>

class Movimentacao{
    public:

        Movimentacao(string descricao, char debitoCredito, double valor);
        virtual ~Movimentacao();

        struct tm getDataMov() {return dataMov;};
        string	getdDescricao() { return descricao; }
        char	getDebitoCredito() { return debitoCredito; }
        double	getValor() { return valor; }

    private:
        struct tm dataMov;
        string descricao;
        char debitoCredito;
        double valor;
};

#endif // MOVIMENTACAO_H
