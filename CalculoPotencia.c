#include<stdio.h>

int main(void){

    int b, p, i, aux=1;

    printf("Base e a Potencia:\n");
    scanf("%d %d",&b,&p);

    for(i=p; i>0; i--){
        aux = aux*b;
    }
    printf("Potencia de %d elevado a %d = %d\n", b,p,aux);
}