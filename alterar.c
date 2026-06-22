#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "modelo_dados.h"

int Alterar()
{
    int selecionado;
    selecionado = Localizar();
    if (selecionado == 0)
    {
        return 0;
    }

    Contato *contato = &CONTATOS[selecionado - 1];

    char novoNome[30];

    printf("Nome atual: %s\nDigite o novo nome: ", contato->nome);
    scanf("%s", &novoNome);
    strcpy(contato->nome, novoNome);

    char novoTelefone[11];

    printf("Telefone atual: %s\nDigite o novo telefone: ", contato->telefone);
    scanf("%s", &novoTelefone);
    strcpy(contato->telefone, novoTelefone);

    printf("Contato atualizado:\nNome: %s, Telefone: %s\n", contato->nome, contato->telefone);

    return 0;
}