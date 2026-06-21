#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "modelo_dados.h"

int Alterar()
{
    int selecionado;

    Listar();
    printf("Digite o ID do contato a ser alterado ou 0 para sair: ");

    scanf("%d", &selecionado);
    if (selecionado < 0 || selecionado > ULTIMO_ID_VALIDO)
    {
        return 0;
    }

    Contato *contato = &CONTATOS[selecionado - 1];

    char novoNome[30];

    printf("Nome atual: %s\nDigite o novo nome: ", contato->nome);
    scanf("%s", &novoNome);
    strcpy((char *)contato->nome, novoNome);

    char novoTelefone[11];
    printf("Telefone atual: %s\nDigite o novo telefone: ", contato->telefone);
    scanf("%s", &novoTelefone);
    strcpy((char *)contato->telefone, novoTelefone);
    printf("Contato atualizado:\nNome: %s, Telefone: %s", contato->nome, contato->telefone);

    return 0;
}