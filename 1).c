/*1) Crie uma simples função chamada print_addr(int x) cujo propósito seja apenas
imprimir o endereço do inteiro x passado para a função. Crie uma variável inteiro na
main, imprima seu endereço e então passe a variável para print_addr. Compare os
resultados. Este comportamento é o esperado?*/
#include <stdio.h>
void print_addr(int valorPonteiro);
int main()
{
    int x = 9;
    printf("\nVEndereco fora da funcao: %p", &x);
    print_addr(x);
    return 0;
}
void print_addr(int valorPonteiro){
    printf("\nO endereco da funcao: %p", &valorPonteiro);
}