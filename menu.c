#include <stdio.h>

int main() {

    int menu, tipo, localizar;

    while (menu != 6) {

    printf("Selecione uma das opções de contatos:\n1-Incluir\n2-Localizar\n3-Alterar\n4-Listar\n5-Excluir\n6-Encerrar programa\n");
    scanf("%d", &menu);

        switch (menu) {
            case 1:
            Adicionar(Contatos);
            break;

            case 2:
            Localizar(Contatos);
            break;
            
            case 3:
            printf("Selecione o contato que deseja alterar:\n");
            break;
            
            case 4:
            Listar(Contatos);
            break;
            
            case 5:
            printf("Selecione o contato que deseja excluir:\n");
            break;

            case 6:
            printf("Programa encerrado.\n");
            break;

            default:
            printf("Opção inválida!");
            break;
            }
    }
    return 0;
}
