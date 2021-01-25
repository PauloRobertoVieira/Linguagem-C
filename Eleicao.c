#include<stdio.h>

int main(void)
{
    int idade;

    printf("qual sua idade? \n");
    scanf("%d", &idade);

    if(idade >=0 && idade <= 15){
        printf("Nao vota\n");
    }else if(idade < 18 || idade > 65){
        printf("Eleitor optante\n");
    }else if(idade >= 18 && idade <= 65){
        printf("Eleitor obrigatorio\n");
    }
    return 0;
}