#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 4

struct tfila{
	int ini;
	int fim;
	int dados[tam];
};

void exibeFila(struct tfila *fila){
	int i;
	
	printf("Estado atual da fila: [");
	for(i = 0;i < fila->fim;i++){
		printf(" %d ",fila->dados[i]);
	}
	printf("]");
}

void enfileira(int val,struct tfila *fila){
	if(fila->fim == tam){
		printf("Fila cheia, não foi possível realizar a inclusão!\n");
	}else{
		fila->dados[fila->fim] = val;
		fila->fim++;
	}
}

int desinfileira(struct tfila *fila){
	int elemento,i;
	if(fila->ini == fila->fim){
		printf("Fila vazia!\n");
		return;	
	}else{
		elemento = fila->dados[fila->ini];
		fila->fim--;
		
		for(i = 0;i < fila->fim;i++){
			fila->dados[i] = fila->dados[i+1];
		}
		return elemento;
	}
}

int main(){
	struct tfila stack;
	int desinf;
	
	setlocale(LC_ALL,"portuguese");

	exibeFila(&stack);
	enfileira(10,&stack);
	printf("\n");
	exibeFila(&stack);
	return 0;
}
