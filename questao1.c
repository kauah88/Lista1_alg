#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int A=0,B=0,C=0,D=0;
    int multi_ab=0, multi_cd=0, diferenca_valores=0;

    printf("Insira o valor A: ");
    scanf("%d", &A);
    
    printf("Insira o valor B: ");
    scanf("%d", &B);

    printf("Insira o valor C: ");
    scanf("%d", &C);

    printf("Insira o valor D: ");
    scanf("%d", &D);

    system("cls");

    multi_ab=A*B;
    multi_cd=C*D;
    

    if(multi_ab>multi_cd){
        diferenca_valores=multi_ab-multi_cd;
    }else{
        diferenca_valores=multi_cd-multi_ab;
    }

    printf("O valor de A=%d * o valor de B=%d - O valor de C=%d * o valor de D=%d\n", A, B, C, D);
    printf("O valor da diferença entre o calculo dos dois e: %d", diferenca_valores);


    return 0;
}