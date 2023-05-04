#include <stdio.h>
#include <string.h>

int main() {

    int frutas = 0, quantidade = 0, valor_total = 0;
    char cancelar[3];

    do {
        printf("Loja de frutas\nDigite o numero respectivo da fruta que deseja comprar:\n");
        printf("frutas disponiveis:\n1-Abacaxi-R$5,00\n2-Maca-R$1,00\n3-Pera-R$4,00\n");

        scanf("%d", &frutas);

        switch (frutas) {
        case 1:
            printf("Abacaxi adicionada ao carrinho!\n");
            quantidade += 1;
            valor_total += 5;
            break;
        case 2:
            printf("Maca adicionada ao carrinho!\n");
            quantidade += 1;
            valor_total += 1;
            break;
        case 3:
            printf("Pera adicionada ao carrinho!\n");
            quantidade += 1;
            valor_total += 4;
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }

        printf("Deseja continuar comprando? (nao para cancelar)\n");
        scanf("%s", cancelar);

    } while (strcmp(cancelar, "nao") != 0);

    printf("A quantidade de frutas compradas: %d\nvalor total da compra foi de: R$%d\n",quantidade, valor_total);

    return 0;
}
