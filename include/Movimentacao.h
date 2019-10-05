#ifndef MOVIMENTACAO_H
#define MOVIMENTACAO_H

#include <string>

using namespace std;

class Movimentacao{
    public:

        Movimentacao(string descricao, char debitoCredito, double valor);
        virtual ~Movimentacao();

        string getDataMov() {return dataMov;};
        string	getDescricao() { return descricao; }
        char	getDebitoCredito() { return debitoCredito; }
        double	getValor() { return valor; }

    private:
        string dataMov;
        string descricao;
        char debitoCredito;
        double valor;
};

#endif // MOVIMENTACAO_H
