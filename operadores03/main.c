#include <stdio.h>
#include <stdlib.h>
//Codigo para multiplicar dois valores
int main()
{
    int x1, x2, result;
    printf("Digite o primeiro valor a ser multiplicado \n");
    scanf("%d",&x1);
    printf("Digite o segundo valor a ser multiplicado \n");
    scanf("%d",&x2);
    result = x1*x2;
    printf("O resultado da multiplicacao e %d \n",result);
}
