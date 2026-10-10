/*2) De acordo com o padrão C, arr[0] é apenas um recurso sintático para *(arr +0).
Escreva um programa que imprima todos os elementos de um array inteiro utilizando
esta notação alternativa.*/
#include <stdio.h>
#define n 5

int main()
{
    int i;
    int array[n] = {1, 4, 88, 90, 322};
    for (i = 0; i < n; i++)
    {
        printf("\n[%d]: %d", i, *(array +i));
    }
    return 0;
}