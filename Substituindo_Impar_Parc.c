#include <stdio.h>
#include <stdlib.h>

#define TAM 6

int main(void)
{
    int vet[TAM];
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Informe o [%d] valor: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\n***********Numeros lidos**********\n");
    for (i = 0; i < TAM; i++)
    {
        printf("%d;\t", vet[i]);
    }
    printf("\n***********substituições**********\n");
    for (i=0; i<TAM; i++){
        if (vet[i]%2==0){
            vet[i]=0;
        }else{
            vet[i]=1;
        }
        printf("%d;\t",vet[i]);
    }
    printf("\n");

    return 0;
}