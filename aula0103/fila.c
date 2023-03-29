#include<stdio.h>
#include<stdlib.h>

int vazio, quantidade,T;
int *inicio;
int *fim;

int main(void)
{
    int fila[T],dado;
    inicio = fila;
    fim = fila;
   quantidade = 0;

   printf("\n <<<<<< implementacao de fila para numeros inteiros >>>>>>");
   while (1)
   {
    printf("escolha uma opcao no menu:\n1 armazenar\n2 recuperar\n3 vizualizar\n4 sair");
    printf("\n ->");
    scanf("%d", &dado);
    getchar();

    switch (dado)
    {
    case 1:InserirDadosFila(dado);
    case 2:RemoverDadosFila();
    case 3:
        /* code */
        break;
    
    default:
        break;
    }

   }
   

}

int* InserirDadosFila(int *endereço, int x)
{
    *endereço = x;
    quantidade++;
    fim = endereço;

    return endereço;
}

int RemoverDadosFila()
{
    quantidade--;
    int temp = *inicio;
    inicio++;
    return temp;
}

int VerificarVazio()
{
    if (inicio == fim &&  quantidade == 0)
    {   
        return 1;
    }else return 0;
}

int VerificarCheio()
{
    if (quantidade == T)
    {
        return 1;
    }else return 0;
}

int Checar(int *fila)
{
    int i;
    printf("\n elementos da fila - do mais novo pro mais antigo: ");
    for (  i = 0; i < T; i++)
    {
        printf("%d, ",*(fila+i));
    }
    printf("\n %d elementos \n",quantidade);

    return quantidade;


}