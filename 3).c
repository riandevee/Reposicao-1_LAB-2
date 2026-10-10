/*3) Escreva um programa que recebe três variáveis (a, b e c) e rotaciona os valores de
forma que o valor de a vai para b, o valor de b para c e o valor de c para a.*/
#include <stdio.h>
int main()
{
    int a = 3, b = 9, c = 12;
    int *ap, *bp, *cpo;
    int temp;
    ap = &a;
    bp = &b;
    cpo = &c;
    printf("\nA: %d, B: %d, C: %d", *ap, *bp, *cpo);
    printf("\nTrocando de valores......");
    temp = *bp;
    *bp = *ap;
    *ap = *cpo;
    *cpo = temp;
    printf("\nA: %d, B: %d, C: %d", *ap, *bp, *cpo);
    printf("/nTrocados!");
    return 0;
}