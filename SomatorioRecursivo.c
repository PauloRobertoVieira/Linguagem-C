#include <stdio.h>

int somatorio(int n)
{
    if (n == 0)
        return 0;
    else
        return n + somatorio(n - 1);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    somatorio(n);
    printf("Somatorio %d:\n", somatorio(n));

    return 0;
}