#include<stdio.h>

int main(void){

    int i=0, j=10;

    printf("Incremento - i = 0");
    while(i<=10){
        printf("\ni: %d",i);
        i++;
    }
    printf("\nDecremento - j = 10");
    while(j>=0){
        printf("\nj: %d",j);
        j--;
    }
    printf("\n");
    return 0;
}