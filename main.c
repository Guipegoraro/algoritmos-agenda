#include <stdio.h>
#include <stdlib.h>
#include "modelo_dados.h"
#include "adicionar.c"
#include "listar.c"
#include "localizar.c"
#include "excluir.c"
#include "alterar.c"

int ULTIMO_ID_VALIDO = 0;
Contato *CONTATOS;

int main()
{
    int menu;

    do
    {

        printf("Selecione uma das opcoes de contatos:\n1-Incluir\n2-Localizar\n3-Alterar\n4-Listar\n5-Excluir\n6-Encerrar programa\n");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            Adicionar();
            break;

        case 2:
            Localizar();
            break;

        case 3:
            Alterar();
            break;

        case 4:
            Listar();
            break;

        case 5:
            Excluir();
            break;

        case 6:
            printf("Programa encerrado.\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
        }
    } while (menu != 6);

    free(CONTATOS);
    return 0;
}