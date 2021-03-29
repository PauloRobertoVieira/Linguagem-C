#include <stdio.h>

int main(void)
{
    int n, i = 1, aux = 1;

    printf("numero para fatorial: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Fatorial de 0 = 1\n");
    }
    else
        while (i <= n)
        {
            aux = aux * i;
            printf("Fatorial = %d\n", aux);
            i++;
        }
    return 0;
}