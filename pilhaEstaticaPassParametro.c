#include <stdio.h>
#include <stdlib.h>
#define tam 6

struct tpilha{
	int ini;
	int topo;
	int dados[tam];
};

void exibePilha(struct tpilha *stack){ //ok
	int i,ocupados=0;
	
	for(i=0;i<tam;i++){
		if(stack->dados[i] >= 0)
			ocupados++;
	}
	
	printf("[");
	for(i=0;i<ocupados;i++){
		printf(" %d",stack->dados[i]);
	}
	printf("]");
}

void exibeStack(int *vet){ //ok
	int i;
	
	printf("[");
	for(i=0;i<tam;i++){
		for(i=0;i<tam;i++){
		printf(" %d",*(vet+i));
	}
	printf("]");
	}
}

void empilha(int val,struct tpilha *stack){ //ok
	if(stack->topo == tam)
		printf("Pilha cheia!\n");
	else{
		stack->dados[stack->topo] = val;
		stack->topo++;
	}
}

int desempilha(struct tpilha *stack){ //ok
	int elemento;
	if(stack->topo == stack->ini){
		printf("Pilha vazia!\n");
		return -1;
	}else{
		stack->topo--;
		elemento = stack->dados[stack->topo];
		stack->dados[stack->topo] = 0;
		return elemento;
	}
}

int main(){
	struct tpilha pilha;
	printf("Chamada de Exibe pilha abaixo\n");
	exibePilha(&pilha);
	printf("\nEmpilha 10\n");
	empilha(10,&pilha);
	exibeStack(&pilha.dados[0]);
	printf("\n");
	empilha(10,&pilha);
	exibeStack(&pilha.dados[0]);
	printf("\n");
	empilha(10,&pilha);
	exibeStack(&pilha.dados[0]);
	printf("\n");
	empilha(10,&pilha);
	exibeStack(&pilha.dados[0]);
	printf("\n");
	empilha(10,&pilha);
	exibeStack(&pilha.dados[0]);
	printf("\n");
	empilha(10,&pilha);
	exibeStack(&pilha.dados[0]);
	printf("\n");
	empilha(10,&pilha);
	exibeStack(&pilha.dados[0]);
	printf("\n");
	//system("CLS");
	system("pause");
	
	exibeStack(&pilha.dados[0]);
	printf("\n");
	desempilha(&pilha);
	exibeStack(&pilha.dados[0]);
	printf("\n");
	desempilha(&pilha);
	exibeStack(&pilha.dados[0]);
	printf("\n");
	desempilha(&pilha);
	exibeStack(&pilha.dados[0]);
	printf("\n");
	desempilha(&pilha);
	exibeStack(&pilha.dados[0]);
	printf("\n");
	desempilha(&pilha);
	exibeStack(&pilha.dados[0]);
	printf("\n");
	desempilha(&pilha);
	exibeStack(&pilha.dados[0]);
	printf("\n");
	desempilha(&pilha);
	exibeStack(&pilha.dados[0]);
	printf("\n");
	return 0;
}
