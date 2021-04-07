#include <stdio.h>

int strlen(char *s)
{
    char *ptr = s;

    while (*s != '\0')
        s++;
    return (int)(s - ptr);
}

int main(void)
{
    char nome[100];

    printf("String: ");
    gets(nome);

    printf("%d\n", strlen(nome));

    return 0;
}