# Atividade de Ponteiros em C

Lista de exercícios sobre ponteiros, endereços de memória e passagem de parâmetros na linguagem C.

## Exercícios

| # | Arquivo | Descrição |
|---|---------|-----------|
| 1 | `ex01.c` | Função `print_addr(int x)` que imprime o endereço do parâmetro e comparação com o endereço da variável original na `main`. |
| 2 | `ex02.c` | Impressão dos elementos de um array usando a notação `*(array + i)` no lugar de `array[i]`. |
| 3 | `ex03.c` | Rotação dos valores de `a`, `b` e `c` usando ponteiros (a→b, b→c, c→a). |
| 4 | `ex04.c` | Declaração e uso de ponteiro para `long` (`lPtr`), atribuição de endereço e desreferenciação. |

## Conceitos abordados

- **Passagem por valor:** a função recebe uma cópia, então o endereço do parâmetro é diferente do da variável original.
- **Aritmética de ponteiros:** `arr[i]` equivale a `*(arr + i)`.
- **Desreferenciação:** `lPtr` é o endereço, `*lPtr` é o valor apontado.
- **Formatos do `printf`:** `%d` para `int`, `%ld` para `long`, `%p` para endereços (com cast `(void *)`).

## Como compilar e executar

Requisito: compilador GCC.

```bash
gcc -Wall -Wextra ex01.c -o ex01
./ex01
```

Repita para os demais arquivos, trocando o nome.

## Autor

Seu Nome