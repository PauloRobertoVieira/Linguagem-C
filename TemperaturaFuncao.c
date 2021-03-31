#include <stdio.h>

int CelsiusFahrenheit(int t)
{
    int tempF;
    tempF = (t * 9 / 5) + 32;
    return tempF;
}

int FahrenheitCelsius(int t)
{
    return (t - 32) * 5 / 9;
}

int main(void)
{
    int temp, op;

    printf("Qual temperatura a converter:\n");
    scanf("%d", &temp);

    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    scanf("%d", &op);
    if (op == 1 || op == 2)
    {
        if (op == 1)
        {
            printf("Temperatura em Fahrenheit %d\n", CelsiusFahrenheit(temp));
        }
        else if (op == 2)
        {
            printf("Temperatura em Celsius %d\n", FahrenheitCelsius(temp));
        }
    }
    else
    {
        printf("[%d] Opção invalida-Escolha 1 ou 2\n", op);
    }
    return 0;
}