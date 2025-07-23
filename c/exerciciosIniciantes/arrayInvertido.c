#include <stdio.h>

int main() {
    int size = 5;
    int input[size];
    int output[size];

    printf("digite 5 numeros inteiros separados: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < size; i++) {
        output[i] = input[size - 1 - i];
    }

    printf("\narray invertido: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", output[i]);
    }
    printf("\n");

    return 0;
}
