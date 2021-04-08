#include <stdio.h>

int val = 5;
int *p = &val;

int main(void)
{
    printf("%d\n", *p);

    return 0;
}