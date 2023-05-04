#include <stdio.h>
#include <math.h>

#define PI  3.14159

int main()
{

    float volume=0, area=0,  raio=8,  raio_elevado=0;
    
    printf("Insira a area da esfera: ");
    scanf("%f", &raio);

    area=4*PI*pow(raio, 2);
    printf("Area da esfera: %.2f\n", area);

    volume=4/3.0*PI*pow(raio,3);
    printf("volume da esfera:%.2f\n", volume);
    
    return 0;
}
