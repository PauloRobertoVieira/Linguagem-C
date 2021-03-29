#include <stdio.h>

unsigned long int fatorial(unsigned long int num)
{
    unsigned long int fat = 1, i;

    for (i = num; (i > 1); i--)
    {
        fat = fat * i;
    }
    return (fat);
}

int main(void)
{
    unsigned long int n;

    scanf("%lu", &n);

    printf("Fatorial de %lu vale: %lu\n",n, fatorial(n));

    return 0;
}