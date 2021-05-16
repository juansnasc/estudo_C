#include <stdio.h>
#include <stdlib.h>
#define TAM 3

struct tipo_pilha{
	int dados[3];
	int ini;
	int topo;
};

void exibePilha(){
	int i;
	printf("[");
	for(i=0;i<TAM;i++){
		printf(" %d",pilha.dados[i]);
	}
	printf(" ]\n");
}

void empilha(int valor){
	if(pilha.topo == TAM)
		printf("Pilha cheia!\n");
	else{
		pilha.dados[pilha.topo] = valor;
		pilha.topo++;
	}
}

int desempilha(){
	int elemento;
	if(pilha.ini == pilha.topo){
		printf("Pilha vazia!\n");
		return -1;
	}else{
		pilha.topo--;
		elemento = pilha.dados[pilha.topo];
		return elemento;
	}
}

void esvaziarPilha(){
	int i,ocupado=0;
	
	for(i=0;i<TAM;i++){
		if(pilha.dados[i] >= 0)
			ocupado++;
	}
	
	if(ocupado){
		for(i=0;i<ocupado;i++)
			desempilha();
	}
}

void menu(){
	int opcao = -1;
	
	while(opcao != 0){
		system("CLS");
		printf("***********MENU***********");
		printf("\n 0 - Sair");
		printf("\n 1 - Exibir Pilha");
		printf("\n 2 - Empilhar valor");
		printf("\n 3 - Desempilhar valor");
		printf("\nSelecione:");
		scanf("%d",&opcao);
	
		switch(opcao){
			int valor,desempilhado;
			case 1:
				exibePilha();
				system("pause");
				break;
			case 2:
				printf("Valor a ser empilhado:");
				scanf("%d",&valor);
				empilha(valor);
				break;
			case 3:
				desempilhado = desempilha();
				if(desempilhado != -1)
					printf("Desempilhado:%d\n",desempilhado);
				system("pause");
				break;
		}	
	}
}

struct tipo_pilha pilha;//variavel global

int main(){
	int cont_desemp;
	
	pilha.ini = 0;
	pilha.topo = 0;
	
	menu();
}
