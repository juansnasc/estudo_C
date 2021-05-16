#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define tam 35
#define max 45
#define qtd 9

struct tlivro{
	int cod;
	char nome[tam];
	char autor[max];
};

struct tpildevol{
	struct tlivro recep[qtd];
	int ini;
	int topo;
};

//protótipos
void inicializa(struct tpildevol *pil);
void menu();
void empilha(struct tpildevol *pil);
int desempilha(struct tpildevol *pil);
void exibePilha(struct tpildevol *pil);

int main(){
	int op=-1;
	struct tpildevol recebidos;
	
	setlocale(LC_ALL,"Portuguese");
	inicializa(&recebidos);
	
	while(op){
		menu();
		printf("Selecione:");
		scanf("%d",&op);
		
		switch(op){
			int retDesimp;
			case 1:
				empilha(&recebidos);
				break;
			case 2:
				retDesimp = desempilha(&recebidos);
				if(retDesimp != 0){
					printf("\nItem retirado, código %d\n",retDesimp);
					system("pause");
				}
				break;
			case 3:
				exibePilha(&recebidos);
				break;
		}
		system("CLS");
	}
}

void inicializa(struct tpildevol *pil){
	int i;
	pil->ini = 0;
	pil->topo = 0;
	
	for(i=0;i < qtd;i++){
		strcpy(pil->recep[i].autor,"");
		strcpy(pil->recep[i].nome,"");
		pil->recep[i].cod = 0;	
	}
}

void menu(){
	printf("**********MENU***********\n");
	printf("0 - Sair\n");
	printf("1 - Inserir novo livro na pilha\n");
	printf("2 - Retirar livro da pilha\n");
	printf("3 - Exibir títulos na pilha de livros\n");
}

void empilha(struct tpildevol *pil){
	if(pil->topo == qtd){
		printf("\nInclusão não realizada, pilha cheia!\n");
		system("pause");
	}else{
		printf("Título:");
		scanf(" %34[^\n]s",&pil->recep[pil->topo].nome);
		printf("Autor:");
		scanf(" %44[^\n]s",&pil->recep[pil->topo].autor);
		printf("Código:");
		scanf(" %d",&pil->recep[pil->topo].cod);
		pil->topo++;
	}
		
}

void exibePilha(struct tpildevol *pil){
	int i;
	if(pil->topo == pil->ini){
		printf("\nNão há livros a exibir,pilha vazia!\n");
		system("pause");
	}else{
		for(i = 0;i < pil->topo;i++){
			printf("\nTítulo:%s\n",pil->recep[i].nome);
			printf("Autor:%s\n",pil->recep[i].autor);
			printf("Código:%d\n",pil->recep[i].cod);
		}
		system("pause");	
	}
}

int desempilha(struct tpildevol *pil){
	int codlivDesim;
	if(pil->topo == pil->ini){
		printf("\nNão há livros a retirar,pilha vazia!\n");
		system("pause");
	}else{
		codlivDesim = pil->recep[pil->topo].cod;
		
		strcpy(pil->recep[pil->topo].nome,"");
		strcpy(pil->recep[pil->topo].autor,"");
		pil->recep[pil->topo].cod = 0;
		
		pil->topo--;
		return codlivDesim;
	}
}
