#include<stdio.h>

double fat(double n)
{
    if(n == 0 || n == 1)
    return 1;
    return n * fat (n - 1);
}

int main(void)
{
    double num = 0;
    printf("Informe um numero: ");
    scanf("%lf", &num);
    printf("Fatorial de %.0lf = %.0lf\n", num, fat(num));
    return 0;
}