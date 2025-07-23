#include <stdio.h>

int main() {
    // Hello World
    printf("Hello, World!\n");

    // Criação de variáveis
    int numero = 5;
    float valor = 3.14;
    char letra = 'A';

    printf("Numero: %d, Valor: %.2f, Letra: %c\n", numero, valor, letra);

    // Exemplo de for
    printf("Contando de 1 a 5 com for:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Exemplo de if
    if (numero > 3) {
        printf("Numero é maior que 3\n");
    } else {
        printf("Numero é 3 ou menor\n");
    }

    // Exemplo de while
    int contador = 0;
    printf("Contando até 3 com while:\n");
    while (contador < 3) {
        printf("%d ", contador);
        contador++;
    }
    printf("\n");

    return 0;
}