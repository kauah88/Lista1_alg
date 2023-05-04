#include <stdio.h>

int main(){

    float soma=0, media=0;
    int i=0, numero[10];
    
    printf("Insira 10 numeros: \n");
    for(i=0; i<10; i++){
        scanf("%d", &numero[i]);
        soma+=(numero[i]);
    }

    media=soma/10;
    printf("A media dos numeros inseridos e: %.2f", media);
}