#include <stdio.h>

int main(){
    int i=1, numero=66;
    float divisao_numero=0;

    printf("Insira um numero positivo: ");
    scanf("%d", &numero);
    
    if (numero>0){
        printf("Divisores do numero: %d\n", numero);
        while (i <= numero){
            if(numero % i == 0){
                printf("[%d]", i);
            }
            i++;
        }
    }else{
        printf("Numero inserido e negativo.");
    }
}