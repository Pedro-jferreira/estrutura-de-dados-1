#include <stdio.h>
#include<stdlib.h>
      
int main() 
{
        int i = NULL;
        int j = NULL ;
        
        i = lervariavel(i,1);
        j = lervariavel(j,2);

        printf(" sem altr %i %i\n",i,j);
        trocarposi(i,j);
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
void trocarposi(int i,int j)
{
 
  i=i+j;
  j=i-j;
  i=i-j;
  
  printf(" com altr %i %i",i,j);
}