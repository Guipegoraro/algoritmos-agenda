#include "modelo_dados.h"

int Localizar()
{
    int localizador;

    do
    {
        if (ULTIMO_ID_VALIDO == 0)
        {
            printf("Sem contatos!");
            return 0;
        }

        Listar();

        printf("Digite o ID do contato ou 0 para voltar ao menu: ");
        scanf("%d", &localizador);

        if (localizador < 0 || localizador > ULTIMO_ID_VALIDO)
        {
            printf("Id inválido.\n");
            continue;
        }
        else if (localizador == 0)
        {
            return 0;
        }
        else
        {
            printf("Id: %d, Nome: %s, Telefone: %s, Tipo: %s \n",
                CONTATOS[localizador - 1].id,
                CONTATOS[localizador - 1].nome,
                CONTATOS[localizador - 1].telefone,
                TiposDeContatos[CONTATOS[localizador - 1].tipo]);
            break;
        }
    } while (localizador != 0);

    return localizador;
}