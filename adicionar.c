#include <stdio.h>

extern int ULTIMO_ID_VALIDO;



int Adicionar()
{
    Contato contato;

    contato.id = ULTIMO_ID_VALIDO + 1;

    printf("Preencha os dados do contato:\nNome: ");
    scanf("%s", &(contato.nome));

    printf("Telefone: ");
    scanf("%s", &(contato.telefone));

    int tipo = 0;
    while (tipo != 1 && tipo != 2) {
    printf("Tipo de contato:\n1-Pessoal\n2-Trabalho\n");
    scanf("%d", &tipo);
        if (tipo != 1 && tipo != 2)
        {
            printf("Opção inválida!\n");
        }
        else if (tipo = 1)
        {
            contato.tipo = PESSOAL;
        }
        else if (tipo = 2)
        {
            contato.tipo = TRABALHO;
        }
    }
    return 0;
}