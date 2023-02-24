#include <stdio.h>
#include<stdlib.h>

#define T 5


int main() 
{
    int array[T];
    int *ptr = array;

    *ptr=SolicitarValor(ptr);
     dobrar(ptr);
}
int SolicitarValor(int *p)
{ 
    int i;
    for ( i= 0; i < T ; i++) 
    {
        printf("digite um valor pra variavel %i:",i);
        scanf("%d", (p+i));
    }
}

void dobrar(int *p)
{
    int i;
        for ( i= 0; i < T ; i++) 
        {
            printf("\no dobro da variavel %i e igual: %d",i , *(p+i)*2);
        }
}

