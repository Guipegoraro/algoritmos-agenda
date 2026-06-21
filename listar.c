#include "modelo_dados.h"

int Listar() {
    printf("Contatos:\n");

    for (int i=0; i < ULTIMO_ID_VALIDO; i++) {
        int id = CONTATOS[ULTIMO_ID_VALIDO - 1].id;
        char *nome = CONTATOS[ULTIMO_ID_VALIDO - 1].nome;
        printf("Id: %d, Nome: %s\n", CONTATOS[i].id, CONTATOS[i].nome);
    }

    return 0;
}