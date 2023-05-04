#include <stdio.h>

int main(){

    int i=0,soma_i=0;

    for(i=0; i<1000; i++){
        if(i % 5 == 0 || i % 3 == 0){
            soma_i+=i;
        }
    }
    printf("%d \n", soma_i);
}