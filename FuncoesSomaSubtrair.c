#include <stdio.h>

int soma(int n1, int n2)
{
    return (n1 + n2);
}

int sub(int n1, int n2)
{
    return (n1 - n2);
}

int main(void)
{
    int a, b, op, numeros;

    printf("Informe dois numeros\n");
    scanf("%d %d", &a, &b);

    printf("1 para soma\n\tOU\n2 para subtração\n");
    scanf("%d", &op);

    if (op == 1)
    {
        numeros = soma(a, b);
    }
    else if (op == 2)
    {
        numeros = sub(a, b);
    }

    printf("resultado = %d\n", numeros);

    return 0;
}