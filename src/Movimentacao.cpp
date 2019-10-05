#include "../include/Movimentacao.h"
#include <stdio.h>      /* puts */
#include <time.h>       /* time_t, struct tm, time, localtime, strftime */

Movimentacao::Movimentacao(string descricao, char debitoCredito, double valor)
{
    this->debitoCredito = debitoCredito;
    this->descricao = descricao;
    this->valor = valor;

    time_t rawtime;
    struct tm * timeinfo;
    char buffer [80];
    time (&rawtime);
    timeinfo = localtime (&rawtime);
    strftime (buffer,80,"%D",timeinfo);
    puts(buffer);

    this->dataMov = buffer;
}

Movimentacao::~Movimentacao()
{

}
