//Escreva um programa que leia dois números e os apresente por ordem crescente.

#include<stdio.h>
int main(void)
{
    int numero1, numero2, temporaria;
    printf("Informe dois numeros:\n");

    scanf("%d%d", &numero1,&numero2);

    if(numero1 > numero2)
        {
            temporaria = numero1;
            numero1 = numero2;
            numero2 = temporaria;
        }
    printf("Ordem crescente %d e %d\n", numero1, numero2);
}