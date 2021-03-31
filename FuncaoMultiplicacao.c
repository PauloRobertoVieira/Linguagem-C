#include <stdio.h>

int calcularMultiplicacao(int n1, int n2)
{
    return n1 * n2;
}

int main(void)
{
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    printf("Retorno da função, é a multiplicação de [%d] por [%d] = %d\n\n",n1,n2, calcularMultiplicacao(n1, n2));

    return 0;
}