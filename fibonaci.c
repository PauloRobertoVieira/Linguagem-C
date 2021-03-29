#include <stdio.h>
#include <conio.h>

main()
{
   int n,i;
   printf("Digite a quantidade de termos da sequência de Fibonacci: ");
   scanf("%d", &n);
   printf("\nA sequência de Fibonacci e: \n");
   for(i=0; i<n; i++)
       printf("%d ", fibonacci(i+1));
   getch();


int fibonacci(int num)
{
   if(num==1 || num==2)
       return 1;
   else
       return fibonacci(num-1) + fibonacci(num-2);
}
/*O laço for contido na função principal main, chama a função fibonacci que calcula os valores retornando o valor 1 quando a posição da sequência for igual a 1 ou 2,
e posteriormente calcula o restante dos números sempre somando as duas posições anteriores para obter o resultado atual.*/