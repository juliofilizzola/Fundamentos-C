# Input Output

## Input

**O programa lê a entrada do padrão de entrada (stdin) ou de um arquivo.**

```c
#include <stdio.h>
 
int main() {
    printf("Olá, Mundo!\n");
    return 0;
}
```

### Printf
```c
#include <stdio.h>
 
int main() {
    int idade = 25;
    float altura = 1.75;
    double saldoBancario = 12345.67;
    char inicial = 'A';
    char nome[20] = "Bruno";
 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
 
    return 0;
}
```

* %d: Imprime um inteiro no formato decimal.
* %i: Equivalente a %d.
* %f: Imprime um número de ponto flutuante no formato padrão.
* %e: Imprime um número de ponto flutuante na notação científica.
* %c: Imprime um único caractere.
* %s: Imprime uma cadeia (string) de caracteres.