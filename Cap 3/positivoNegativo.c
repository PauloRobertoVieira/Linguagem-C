#include<stdio.h>

int main(void)
{
    int x;

    printf("Informe um numero\n");
    scanf("%d",&x);
    if(x>=0)
        printf("Positivo\n");
    else
        printf("Negativo");

    return 0;
}