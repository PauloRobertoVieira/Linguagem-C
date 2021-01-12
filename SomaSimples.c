#include<stdio.h>//biblioteca entrada e saida

int main(void)//função principal
{
    int n1, n2 = 0;//declaração variaveis
    printf("Informe dois numeros:\n");
    scanf("%d %d", &n1, &n2);

    printf("A soma de %d + %d = %d\n", n1, n2, n1+n2);//saida dados com calculo

    return 0;
}