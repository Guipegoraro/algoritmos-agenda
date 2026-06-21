#include <stdlib.h>
#include <stdio.h>
#include "modelo_dados.h"
#include <string.h>
// #include "listar.c"

int Alterar()
{
    int selecionado;
    printf("Digite o ID do contato a ser alterado ou 0 para sair: ");

    // Listar();
    scanf("%d", &selecionado);

    if (selecionado < 0 || selecionado > ULTIMO_ID_VALIDO)
    {
        return 0;
    }

    Contato *contato = &CONTATOS[selecionado - 1];

    char novoNome[30];

    printf("Nome atual: %s\nDigite o novo nome ou enter para manter o atual: ", contato->nome);
    scanf("%s", novoNome);
    if (!novoNome || !(*novoNome))
    {
        
    }

    char novoTelefone[11];
    printf("Telefone atual: %c\nDigite o novo telefone ou enter para manter o atual: ", contato->telefone);
    scanf("%s", novoTelefone);
    if (!novoTelefone || !(*novoTelefone))
    {
        strcpy((char *) contato->telefone, novoTelefone); //gambiarra
    }

    printf("Contato atualizado:\nNome: %s, Telefone: %s", contato->nome, contato->telefone);

    return 0;
}