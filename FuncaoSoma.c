#include<stdio.h>

int soma(int x, int y);

int main(void){
    int x, y;
    scanf("%d %d",&x, &y);
    soma(x,y);

    return 0;
}

int soma(int num1, int num2){

    printf("soma de %d + %d = %d\n", num1, num2, num1+num2);

    return 0;

}