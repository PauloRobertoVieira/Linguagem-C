#include<stdio.h>

int main(void)
{
    float salario;

    printf("Qual salario\n");
    scanf("%f",&salario);

    if(salario <=0)
        printf("Salario: valor invalido");
    else
        if (salario > 1000)
        {
            printf("Imposto 10% = %.2f\n", salario*0.10);
        }else
            printf("Imposto 5% = %.2f\n", salario*0.05);

    return 0;        
}