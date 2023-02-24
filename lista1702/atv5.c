#include <stdio.h>
#include<stdlib.h>
      
int main() 
{
        int i = NULL;
        int j = NULL ;
        
        i = lervariavel(i,1);
        j = lervariavel(j,2);

        printf(" sem altr %i %i\n",i,j);
        MaiorPsi(i,j);
}

int lervariavel(int n,int v){
    if (v==1)
    {
    printf("digite a primeira variavel\n");
    scanf("%i",&n);
    }else  
    {
        printf("digite a segunda variavel \n");
        scanf("%i",&n);
    }
    
    return n;
}
void MaiorPsi(int i, int J){
    if (i > J)
    {
        printf("com altr %i e %i",i,J);
    }else {printf("com altr %i e %i",J,i);}
    
}