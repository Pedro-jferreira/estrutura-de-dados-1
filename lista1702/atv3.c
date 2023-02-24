#include <stdio.h>
#include<stdlib.h>

int main() 
{
        int i = 0 ;

        int j = 0 ;

    printf("digite a primeira variavel\n");
    scanf("%i",&i);
    printf("digite a segunda variavel \n");
    scanf("%i",&j);
    int *pinti = &i ;
    int *pintj = &j ;
    
    if (pinti > pintj)
    {
        printf("%i e maior e %i e menor",*pinti,*pintj);
    }else printf("%i e maior e %i e menor",*pintj,*pinti);
    
}
