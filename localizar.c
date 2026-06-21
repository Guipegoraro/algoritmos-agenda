#include "modelo_dados.h"

int Localizar(int usoInterno)
{
    int localizador;

    while (localizador != 0)
    {
        printf("Digite o ID do contato ou 0 para voltar ao menu:\n");
        scanf("%d", &localizador);
        if ((localizador < 1 && localizador > 0) || localizador > ULTIMO_ID_VALIDO)
        {
            printf("Id inválido.\n");
            continue;
        }
        else if (localizador == 0)
        {
            return 0;
        }
        else if (usoInterno == 0)
        {
            printf("Id: %d, Nome: %s, Telefone: %s, Tipo: %s \n",
                CONTATOS[localizador - 1].id,
                CONTATOS[localizador - 1].nome,
                CONTATOS[localizador - 1].telefone,
                TiposDeContatos[CONTATOS[localizador - 1].tipo]);
        }
    }

    return localizador;
}