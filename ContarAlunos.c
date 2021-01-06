/*Escreva um programa que leia o número de alunos e de alunas de uma sala.
Mostre o número de alunos e em seguida o de alunas e o total.*/

#include <stdio.h>//biblioteca standart

int main(void)//funcao principal
{
    int alunos, alunas, soma;//declaracao variaveis

    printf("Informe numero alunos\n");
    scanf("%d",&alunos);
    printf("Informe numero alunas\n");
    scanf("%d",&alunas);

    soma = alunos+alunas;//calculo soma das quantidades

    printf("Alunos = %d, Alunas = %d, a soma = %d\n", alunos, alunas, soma);

    return 0;
}