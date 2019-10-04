#ifndef INTERFACE_H
#define INTERFACE_H

#include <string>
#include <fstream>
#include <iostream>

#include <Banco.h>


class Interface {
    public:
        Interface();
        virtual ~Interface();

        void menu();
        void novoCliente();
        void novaConta();
        void excluirCliente();
        void excluirConta();
        void deposito();
        void saque();
        void transferencia();
        void cobrarTarifa();
        void cobrarCpmf();
        void saldo();
        void extrato();
        void clientes();
        void contas();
        void main();
    private:
};

#endif // INTERFACE_H
