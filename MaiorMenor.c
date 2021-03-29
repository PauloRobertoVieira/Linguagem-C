#include<stdio.h>

int main(void){

    int n, maior, menor, flag=0;

    printf("Informe um numero:\n");
    scanf("%d",&n);
    maior = n;
    menor = n;

    do {
        printf("Informe um numero:\n");
        scanf("%d",&n);
        if (flag==0){
            maior = 0;
            menor = 0;
            flag = 1;
        }
        if (n>-2){
            if (n>maior){
                maior = n;
            }else if(n<menor && n!=-1){
                menor = n;
            }
        }else{
            printf("\nNumero invalido!\n");
        }
    }while(n!=-1);
    printf("Maior: %d\n",maior);
    printf("Menor: %d\n",menor);
}