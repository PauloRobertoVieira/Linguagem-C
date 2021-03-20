#include<stdio.h>

int main(void){
    int nota1, nota2, media = 0;

    printf("nota 1: ");
    scanf("%d", &nota1);
    printf("nota 2: ");
    scanf("%d", &nota2);

    media = (nota1+nota2)/2;
    printf("Media final = %d\n", media);
    if (media > 5)
    {
        printf("Aprovado");
    }
    else{
        printf("Reprovado");
    }
    return 0;
}