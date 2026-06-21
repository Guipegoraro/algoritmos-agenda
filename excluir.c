#include "modelo_dados.h"

int Excluir() {

    int opcaoDeExcluir = 2;

    while (opcaoDeExcluir != 1) {

    Localizar(CONTATOS);

    printf("Id: %s, Nome: %s", CONTATOS[localizador - 1].id, CONTATOS[localizador - 1].nome);
    
    printf("Deseja excluir esse contato?\n1-Sim\n2-Não\n");
        scanf("%d", &opcaoDeExcluir);

        if (opcaoDeExcluir != 1 && opcaoDeExcluir != 2) {
            printf("Opção inválida.");
        }
    }

    for (int i = localizador - 1; i < ULTIMO_ID_VALIDO - 1; i++) {
        CONTATOS[i] = CONTATOS[i + 1];
    }

    CONTATOS = (Contato*) realloc(CONTATOS, sizeof(Contato) * ULTIMO_ID_VALIDO - 2);

    printf("Contato excluído.");
    return 0;
}