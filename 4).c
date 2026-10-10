/*4) Escreva uma única instrução que execute as tarefas requeridas para cada um dos
itens a seguir. Suponha que as variáveis inteiras longas value1 e value2 tenham sido
definidas, e que value1 tenha sido inicializado com 200000.
a) Defina a variável lPtr para que ela seja um ponteiro para um objeto do tipo long;
b) Atribua o endereço da variável value1 à variável de ponteiro lPtr;
c) Imprima o valor do objeto apontado por lPtr;
d) Atribua o valor do objeto apontado por lPtr à variável value2;
e) Imprima o valor de value2;
f) Imprima o endereço de value1;
g) Imprima o endereço armazenado em lPtr. O valor impresso é o mesmo que o
endereço de value1?*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    long value1 = 200000;
    long value2;
    long *lPtr;
    lPtr = &value1;
    printf("\nc) Imprima o valor do objeto apontado por lPtr: %p", lPtr);
    value2 = lPtr;
    printf("\ne) Imprima o valor de value2: %p", value2);
    printf("\nf) Imprima o endereço de value1: %p", &value1);
    printf("\ng) Imprima o endereço armazenado em lPt: %p", lPtr);
    printf("\nO valor impresso é o mesmo que o endereço de value1?R= Sim");
    return 0;
}