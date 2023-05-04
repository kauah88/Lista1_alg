#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x1=0, y1=0, x2=0, y2=0;
    float potencia_xy1=0, potencia_xy2=0, soma_potencias=0, r2_d_soma=0;

    printf("Insira o valor x1: ");
    scanf("%d", &x1);
    
    printf("Insira o valor y1: ");
    scanf("%d", &y1);

    printf("Insira o valor x2: ");
    scanf("%d", &x2);

    printf("Insira o valor y2: ");
    scanf("%d", &y2);

    potencia_xy1=pow((x2-x1), 2);
    potencia_xy2=pow((y2-y1), 2);

    soma_potencias=potencia_xy1+potencia_xy2;

    r2_d_soma = sqrt(soma_potencias);

    printf("%.4f", r2_d_soma);

}