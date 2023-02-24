#include <stdio.h>
#include<stdlib.h>


int main() {
    int array[5];
    int *ptr = array;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", ptr + i);
    }

    printf("\nDobro dos valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i) * 2);
    }

    return 0;
}


