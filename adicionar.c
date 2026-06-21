#include <stdio.h>
#include "modelo_dados.h"

int Adicionar()
{
    Contato contatoNovo;

    ULTIMO_ID_VALIDO = ULTIMO_ID_VALIDO + 1;

    if (ULTIMO_ID_VALIDO == 1)
    {
        CONTATOS = (Contato *)malloc(sizeof(Contato));
    }
    else
    {
        CONTATOS = (Contato *)realloc(CONTATOS, sizeof(Contato) * ULTIMO_ID_VALIDO);
    }

    contatoNovo.id = ULTIMO_ID_VALIDO;

    printf("Preencha os dados do contato:\nNome: ");
    scanf("%s", &(contatoNovo.nome));

    printf("Telefone: ");
    scanf("%s", &(contatoNovo.telefone));

    int tipo = 0;
    while (tipo != 1 && tipo != 2)
    {
        printf("Tipo de contato:\n1-Pessoal\n2-Trabalho: ");
        scanf("%d", &tipo);
        if (tipo != 1 && tipo != 2)
        {
            printf("Opção inválida!\n");
        }
        else if (tipo == 1)
        {
            contatoNovo.tipo = PESSOAL;
        }
        else if (tipo == 2)
        {
            contatoNovo.tipo = TRABALHO;
        }
    }

    CONTATOS[ULTIMO_ID_VALIDO - 1] = contatoNovo;

    printf("Contato cadastrado!\n");
    printf("Id: %d, Nome: %s, Telefone: %s, Tipo: %s \n",
        CONTATOS[ULTIMO_ID_VALIDO - 1].id,
        CONTATOS[ULTIMO_ID_VALIDO - 1].nome,
        CONTATOS[ULTIMO_ID_VALIDO - 1].telefone,
        TiposDeContatos[CONTATOS[ULTIMO_ID_VALIDO - 1].tipo]);
    return 0;
}