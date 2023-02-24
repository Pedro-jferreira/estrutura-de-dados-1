#include <stdio.h>
#include<stdlib.h>

int main() 
{
        int i = 20 ;
    int *pinti = &i ;
        int j = 8 ;
    int *pintj = &j ;


    if (pinti > pintj)
    {
        printf("%i e maior e %i e menor",pinti,pintj);
    }else printf("%i e maior e %i e menor",pintj,pinti);
    
}
