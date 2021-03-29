#include<stdio.h>

int maior(int num1, int num2);

int main(void){

    int x,y;

    scanf("%d %d",&x, &y);
    maior(x,y);
    printf("O maior dos dois valores = %d\n", maior(x,y));

    return 0;
}

int maior(int num1, int num2){
    if(num1>num2)
        return num1;
    else
        return num2;
}