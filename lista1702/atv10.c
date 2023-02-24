#include <stdio.h>
#include<stdlib.h>

#define t 5


int main() {
    int array[t];
    int *ptr = array;
    int i;
    for ( i= 0; i < t ; i++) {
        printf("digite um valor pra variavel %i:",i);
        scanf("%d", (ptr+i));
    
    }
    dobrar(ptr);

}
void dobrar(int *p){
    int i;
        for ( i= 0; i < t ; i++) {
        printf("\no dobro da variavel %i e igual: %d",i , *(p+i)*2);
    
    }

}
