#include<stdio.h>

int main(void)
{
    int x,y;

    printf("Informe dois inteiros: ");
    scanf("%d%d",&x, &y);
    /*As expressões são avaliadas e o resultado de cada
    Avaliação é escrito como inteiro (0 — Falso, 1 — Verdade).*/
    printf("O Resultado de %d == %d : %d\n",x,y,x==y);
    printf("O Resultado de %d >  %d : %d\n",x,y,x>y);
    printf("O Resultado de %d >= %d : %d\n",x,y,x>=y);
    printf("O Resultado de %d <  %d : %d\n",x,y,x<y);
    printf("O Resultado de %d <= %d : %d\n",x,y,x<=y);
    printf("O Resultado de %d != %d : %d\n",x,y,x!=y);
    return 0;
}