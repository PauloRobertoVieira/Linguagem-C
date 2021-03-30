#include <stdio.h>

#define TAM 10

int main(void)
{
    int vet[TAM];
    int n, i, qtdvezes = 0;

    for (i = 0; i < 10; i++) //ler 10 numeros
    {
        printf("Informe o %dº valor: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("Informe o numero a ser descoberto\n"); 
    scanf("%d", &n);//numero a ser descoberto

    for (i = 0; i < 10; i++)
    {
        if (vet[i] == n)
        {
            qtdvezes++;
        }
    }
    printf("o %d apareceu %d vezes!\n", n, qtdvezes);
    return 0;
}