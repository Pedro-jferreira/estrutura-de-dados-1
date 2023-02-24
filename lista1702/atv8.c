#include <stdio.h>

int main() {
    float array[10];
    int i;

    for (i = 0; i < 10; i++) {
        array[i] = (float)i / 2;
    }

    for (i = 0; i < 10; i++) {
        printf("Endereco da posicao %d: %p\n", i, &array[i]);
    }

    return 0;
}