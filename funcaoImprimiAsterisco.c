#include<stdio.h>

void linha();
void texto();

int main(void){

    linha();
    texto();
    linha();

    return 0;
}

void linha(){
    int i;
    for (i=0; i<40; i++)
        putchar('*');
    putchar('\n');
}

void texto(){
    printf("\ttotal de 40 asterisco\n");
}