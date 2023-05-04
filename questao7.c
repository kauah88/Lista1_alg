#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &numero);

    int fibonacci[numero+1];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    
    for (int i = 2; i <= numero; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    printf("O enesimo termo da sequencia de Fibonacci e:  %d\n", fibonacci[numero]);
    return 0;
}
