#include <stdio.h>
#include "modelo_dados.h"

int Listar() {

    if (ULTIMO_ID_VALIDO == 0)
        {
            printf("Sem contatos! ");
            return 0;
        }

    else 
        {
        printf("Contatos:\n");

    for (int i = 0; i < ULTIMO_ID_VALIDO; i++) {
        printf("Id: %d, Nome: %s\n", CONTATOS[i].id, CONTATOS[i].nome);
    }
        }

    return 0;
}