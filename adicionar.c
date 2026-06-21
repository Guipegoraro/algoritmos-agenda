#include <stdio.h>
#include "modelo_dados.h"

int Adicionar()
{
    Contato contatoNovo;

    CONTATOS = (Contato *) realloc(CONTATOS, sizeof(Contato) * ULTIMO_ID_VALIDO);


    ULTIMO_ID_VALIDO = ULTIMO_ID_VALIDO + 1;
    
    contatoNovo.id = ULTIMO_ID_VALIDO;
    
    printf("Preencha os dados do contato:\nNome: ");
    scanf("%s", &(contatoNovo.nome));
    
    printf("Telefone: ");
    scanf("%s", &(contatoNovo.telefone));
    
    int tipo = 0;
    while (tipo != 1 && tipo != 2) {
        printf("Tipo de contato:\n1-Pessoal\n2-Trabalho: ");
        scanf("%d", &tipo);
        if (tipo != 1 && tipo != 2)
        {
            printf("Opção inválida!\n");
        }
        else if (tipo = 1)
        {
            contatoNovo.tipo = PESSOAL;
        }
        else if (tipo = 2)
        {
            contatoNovo.tipo = TRABALHO;
        }
    }
    
    CONTATOS[ULTIMO_ID_VALIDO - 1] = contatoNovo;
    //imprimir contato criado direto da lista de contatos
    printf("Contato cadastrado!\n");
    int id = CONTATOS[ULTIMO_ID_VALIDO - 1].id;
    char *nome = CONTATOS[ULTIMO_ID_VALIDO - 1].nome;
    printf("Id: %d, Nome: %s\n", id, nome);

    return 0;
}