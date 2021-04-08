#include <stdio.h>
#include <stdlib.h>

typedef struct ponto
{
    float x;
    float y;
} Ponto;

int main(void)
{
    Ponto *p = (Ponto *)malloc(sizeof(Ponto));

    p->x = 1;
    p->y = 5;

    printf("%.2f %.2f\n", p->x, p->y);

    return 0;
}