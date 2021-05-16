#include <stdio.h>
#include <stdlib.h>
//Operação de divisão
int main()
{
    int y1, y2, result;
    printf("Digite o primeiro valor da divisao \n");
    scanf("%d",&y1);
    printf("Digite o segundo valor da divisao \n");
    scanf("%d",&y2);
    result = y1 / y2;
    printf("O resultado da divisao e %d \n", result);
}
