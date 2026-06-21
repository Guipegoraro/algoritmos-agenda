#include <stdlib.h>
#include "modelo_dados.h"
//#include "localizar.c"

int Excluir() {

    int opcaoDeExcluir = 2;
    int localizador;

    while (opcaoDeExcluir != 1) {

    localizador = Localizar(CONTATOS);

    int id = CONTATOS[localizador - 1].id;
    char *nome = CONTATOS[localizador - 1].nome;
    printf("Id: %d, Nome: %s\n", CONTATOS[localizador - 1].id, CONTATOS[localizador - 1].nome);
    
    printf("Deseja excluir esse contato?\n1-Sim\n2-Não\n");
        scanf("%d", &opcaoDeExcluir);

        if (opcaoDeExcluir != 1 && opcaoDeExcluir != 2) {
            printf("Opção inválida.");
        }
    }

    for (int i = localizador - 1; i < ULTIMO_ID_VALIDO - 1; i++) {
        CONTATOS[i] = CONTATOS[i + 1];
    }

    CONTATOS = (Contato*) realloc(CONTATOS, sizeof(Contato) * (ULTIMO_ID_VALIDO - 1));

    printf("Contato excluído.");
    return 0;
}