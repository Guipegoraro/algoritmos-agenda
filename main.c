#include <stdio.h>
#include <stdlib.h>
#include "modelo_dados.h"
#include "adicionar.c"
#include "listar.c"
#include "localizar.c"
#include "excluir.c"
//#include "alterar.c"

int ULTIMO_ID_VALIDO = 0;
Contato *CONTATOS;

int CriarPrimeiroContatoTeste()
{    CONTATOS = (Contato *) malloc(sizeof(Contato));

    ULTIMO_ID_VALIDO = ULTIMO_ID_VALIDO + 1;

    Contato contatoTeste = {
        ULTIMO_ID_VALIDO,
        "Guilherme",
        "48996881297"
    };

    CONTATOS[0] = contatoTeste;
    printf("Nome: %s, Telefone: %s\n", contatoTeste.nome, contatoTeste.telefone);
    return 0;
}

int main()
{
    CriarPrimeiroContatoTeste();

    //Alterar();
    Adicionar();
    Listar();
    Localizar();
    Excluir();
    Listar();
    return 0;
}



//lembrar tratamento de dados
//lembrar limpar memmoria free()