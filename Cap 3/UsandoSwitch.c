#include <stdio.h>

int main(void)
{
    int dia = 0;

    printf("Qual dia da semana?\n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terça\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quitna\n");
        break;
    case 6:
        printf("Sextou\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    default:
        printf("Valor invalido\n");
    }
    return 0;
}
