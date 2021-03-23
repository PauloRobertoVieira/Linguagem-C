#include<stdio.h>

int main(void){
    int n, i=1;

    printf("informe o numero da tabuada: ");
    scanf("%d",&n);

    while (i<=10){
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
}