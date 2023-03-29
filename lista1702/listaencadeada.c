#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

typedef struct dados Dados;
//definindo os atributos para o programa;
Dados* init(void);
Dados* inserir(Dados* p, char* nome, int idade);
int listarElementos(Dados* p);
int vazio(Dados* p);
int cont(Dados* p);
Dados* busca(Dados* p, char* nome);
Dados* apagarLista(Dados* p);
Dados* removeRegistro(Dados* p, char* nome);
int imprimeNaOrdem(Dados* p); //IMPLEMENTA��O RECURSIVA

struct dados {
	//COLOQUE AS VARI�VEIS DOS DADOS
	char nome[50];
	int idade;
	Dados *proximo;
};

int main(void){
	setlocale(LC_ALL, "Portuguese");
	Dados* d = init();
	printf("Tamanho do elemento desta lista: %d\n", sizeof(Dados));
	vazio(d);
	
	printf("Inserido um elemento na lista, %p\n", (d = inserir(d, "Ricard�o", 42)));
	printf("Inserido outro elemento na lista, %p\n", (d = inserir(d, "Jorginho", 40)));
	printf("Inserido outro elemento na lista, %p\n", (d = inserir(d, "Jo�o", 18)));

	vazio(d);
	
	listarElementos(d);
	printf("\n>>>Listando na ordem de entrada<<<\n");
	imprimeNaOrdem(d);
	printf("\nMemoria gasta para armazenar: %d Bytes\n",  cont(d));
	if(busca(d, "Jo�o") != NULL) printf("\nEncontrei o %s\n", busca(d, "Jo�o")->nome);
	else printf("\nN�o encontrei o Jo�o\n");
	
	d = removeRegistro(d, "Jo�o");
	
	if(busca(d, "Jo�o") != NULL) printf("\nEncontrei o %s\n", busca(d, "Jo�o")->nome);
	else printf("\nN�o encontrei o Jo�o\n");
	listarElementos(d);

		
	d = apagarLista(d);
	listarElementos(d);
	vazio(d);
	//printf("\n%s\n", d->nome);
	//printf("\n%s\n", d->proximo->nome);
	
	
}

Dados* init(void){
	return NULL;
}

Dados* inserir(Dados* p, char* nome, int idade){
	//RESERVA A MEMORIA RAM PARA O ARMAZENAMENTO E RETORNA EM p O ENDERE�O
	Dados* n = (Dados*) malloc(sizeof(Dados));
	
	//DE POSSE DO ENDERE�O PREVIAMENTE RESERVADO, ARMAZENO OS DADOS.
	//USO O OPERADO -> POIS A SINTAXE DE C UTILIZA ESTE PARA MANIPULAR ELEMENTOS DE STRUCTS ATRAV�S DE PONTEIROS.
	n->idade = idade;
	strcpy(n->nome, nome); //uso a fun��o strcpy para conseguir copiar a string.
	n->proximo = p;
	//RETORNO COM O ENDERE�O DE ONDE OS DADOS EST�O ARMAZENADOS.
	return n;
}

int listarElementos(Dados* p){
	Dados* n;
	for(n = p; n != NULL; n= n->proximo){
	  printf("\nIdade %d, Nome: %s\n", n->idade, n->nome);	
	}
	return 1;
}

int vazio(Dados* p){
	if(p == NULL){
		printf("\nEst� vazio!\n");
		return 1;
	} else{
		printf("\nN�o est� vazio!\n");
		return 0;
	} 
}

int cont(Dados* p){
	int c = 0;
	Dados* n;
	for(n = p; n != NULL; n= n->proximo){
		c = c + sizeof(Dados);
	}
	return c;
}

Dados* busca(Dados* p, char* nome){
	Dados* n;
	for(n = p; n != NULL; n= n->proximo){
		//ESTA CONSIDERA QUE N�O TEMOS NOMES REPETIDOS
		//CASO TENHA NOME REPETIDO VAI RETORNA A PRIMEIRA OCORRENCIA.
		//SE VOC� QUISER CONISERAR O RETORNO DE NOMES REPETIDOS VOC� PODE:
		//CRIAR UM VETOR DE PONTEIROS E RETORNA ESSE VETOR COM OS ENDRE�OS ENCONTRADOS.
		if(!strcmp(nome, n->nome)) return n;
	}
	return NULL;
}

Dados* apagarLista(Dados* p){
	Dados* n;
	for(n = p; n != NULL; n= n->proximo){
		free(n);
	}
	return init(); //RETORNA UM NULL PARA ATUALIZAR O PONTEIRO DE LISTA VAZIA.
}

Dados* removeRegistro(Dados* p, char* nome){
	//Entrada para buscar o endere�o
	Dados* alvo = busca(p, nome);//alvo;
	Dados* n;
	for(n = p; n != NULL; n= n->proximo){//Percorre a lista
	//Pegar o endere�o e atualzar o ponteiro do emento que aponta para ele
		if(n->proximo == alvo){
		//n.proximo = n.proximo->proximo; A linha abaixo � sin�nimo desta. 
			n->proximo = alvo->proximo;
			break;
		}else if(alvo = p) {// Se o alvo est� na ponta da lista, atualizo o ponteiro da ponta no main atav�s do return.
				p = alvo->proximo;
				alvo = NULL;
				break;	
			}
	}		
	//Liberar/apagar o endere�o
	free(alvo);
	return p;
}

int imprimeNaOrdem(Dados* p) //IMPLEMENTA��O RECURSIVA
{
	Dados* n = p;
	//printf("\nIdade %d, Nome: %s\n", n->idade, n->nome);
	if(n != NULL)imprimeNaOrdem(n->proximo);
	else return 0;
	printf("\nIdade %d, Nome: %s\n", n->idade, n->nome);
	return 0;	
}
