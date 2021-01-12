#include<stdio.h>

int main(void)
{
    int n1, n2 = 0;
    printf("Informe dois numeros:\n");
    scanf("%d %d", &n1, &n2);

    printf("A soma de %d + %d = %d\n", n1, n2, n1+n2);

    return 0;
}