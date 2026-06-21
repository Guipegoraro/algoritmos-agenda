#include "modelo_dados.h"

int Localizar() {

    int localizador;

    do {
        printf("Digite o ID do contato desejado:\n");
        scanf("%d", &localizador);

        if (ULTIMO_ID_VALIDO < localizador || 1 > localizador) {
            printf("Id inválido.\n");
        }

        else {
            for (int i = 0; i < localizador; i++) {
                if (CONTATOS[i].id = localizador) {
                    int id = CONTATOS[localizador - 1].id;
                    char *nome = CONTATOS[localizador - 1].nome;
                printf("Id: %d, Nome: %s", CONTATOS[i].id, CONTATOS[i].nome);
                }
        }
        }
    } while (ULTIMO_ID_VALIDO < localizador || 1 > localizador);

    return localizador;
}