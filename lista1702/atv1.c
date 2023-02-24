#include <stdio.h>
#include<stdlib.h>


int main()
{
    
    int i = 2 ;
    int *pint = &i ;

    float f = 0.2 ;
    float *pfloat = &f ;

    char c = 'a';
    char *pchar = &c;
     printf ("sem alteracao\nInteiro %i\n Real %f\n Char %c" , *pint, *pfloat, *pchar);

    *pint = 4 ;
    *pfloat = 0.8 ;
    *pchar = 'f';


 printf ("\ncom alteracao\nInteiro %i\n Real %f\n Char %c" , *pint, *pfloat, *pchar);

}

