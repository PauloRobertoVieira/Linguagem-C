#include<stdio.h>

int calcular(int idade);

int main(void){
    
    int idade;
    
    printf("Informe sua idade\n");
    scanf("%d", &idade);

    calcular(idade);

    return 0;
}

int calcular(int idade){

    if (idade > 17)
        printf("Maior idade\n");
    else
        printf("Menor idade\n");
    
    return 0;
}