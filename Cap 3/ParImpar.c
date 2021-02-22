#include<stdio.h>

int main(void)
{
    int numero;
    printf("Informe um numero: ");
    scanf("%d",&numero);
    if(numero % 2 == 0)
        printf("%d = Par \n",numero);
    else
        printf("%d = Impar \n",numero);
}