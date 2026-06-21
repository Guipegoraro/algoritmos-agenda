#include <stdlib.h>
#include "modelo_dados.h"

int Excluir()
{
    int selecionado = Localizar();

    if (selecionado == 0)
    {
        return 0;
    }

    Contato *novaLista = (Contato *)malloc(sizeof(Contato) * (ULTIMO_ID_VALIDO - 1));

    int passou = 0;
    for (int i = 0; i < ULTIMO_ID_VALIDO; i++)
    {
        if (CONTATOS[i].id == selecionado)
        {
            passou = 1;
            continue;
        }
        novaLista[i - passou] = CONTATOS[i];
        novaLista[i - passou].id = i - passou + 1;
    }

    ULTIMO_ID_VALIDO = ULTIMO_ID_VALIDO - 1;
    
    free(CONTATOS);
    CONTATOS = novaLista;

    Listar();

    return 0;
}