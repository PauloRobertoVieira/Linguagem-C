#include <stdio.h>
#include <stdlib.h>

typedef struct dados
{
    int idade;
    float altura;
} pessoa;

int main(void)
{
    pessoa p;

    p.idade;
    p.altura;

    scanf("%d %f", &p.idade, &p.altura);

    printf("%d anos, com altura de %.2f\n", p.idade, p.altura);

    return 0;
}