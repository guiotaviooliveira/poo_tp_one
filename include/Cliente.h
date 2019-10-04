#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
    public:

        Cliente(string nomeCliente, string cpf_cnpj, string endereco, string fone);
        virtual ~Cliente();

        string	getNomeCliente() { return nomeCliente; }
        void	setNomeCliente(string val) { nomeCliente = val; }
        string	getCpfCnpj() { return cpf_cnpj; }
        void	setCpfCnpj(string val) { cpf_cnpj = val; }
        string	getEndereco() { return endereco; }
        void	setEndereco(string val) { endereco = val; }
        string	getFone() { return fone; }
        void	setFone(string val) { fone = val; }
    private:
        string nomeCliente;
        string cpf_cnpj;
        string endereco;
        string fone;
};

#endif // CLIENTE_H
