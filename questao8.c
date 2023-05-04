#include <stdio.h>

int main() {
    int i = 0, menor_numero, maior_numero, numero[100];
    
    printf("Insira numeros positivos (terminar com um numero negativo):\n");
    
    while (1) {
        printf("Insira um numero: ");
        scanf("%d", &numero[i]);
        
        if (numero[i] < 0) {
            break;
        }
        
        if (i == 0) {
            menor_numero = maior_numero = numero[i];
        } else {
            if (numero[i] < menor_numero) {
                menor_numero = numero[i];
            }
            
            if (numero[i] > maior_numero) {
                maior_numero = numero[i];
            }
        }
        
        i++;
    }

    printf("O menor numero inserido foi: %d\n", menor_numero);
    printf("O maior numero inserido foi: %d", maior_numero);
    
}