#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 5

//declaração do tipo fila
struct tfila{
	int ini;
	int fim;
	int dados[tam];
};

//protótipos
void exibeFila();
void enfileira(int val);
int desinfileira();

//variável global da estrutura criada
struct tfila fila;

int main(){
	int retDesinf,val;
	fila.ini = 0;
	fila.fim = 0;
	//val = 55;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\nExibindo fila\n");
	exibeFila();
	printf("\n\nEnfileirando %d",val);
	enfileira(10);
	enfileira(20);
	enfileira(5);
	printf("\n");
	enfileira(30);
	enfileira(40);
	printf("\nExibindo fila\n");
	exibeFila();
	retDesinf = desinfileira();
	printf("\n\nDesinfileirando %d\n",retDesinf);
	exibeFila();
	retDesinf = desinfileira();
	printf("\n\nDesinfileirando %d\n",retDesinf);
	exibeFila();
	retDesinf = desinfileira();
	printf("\n\nDesinfileirando %d\n",retDesinf);
	exibeFila();
	retDesinf = desinfileira();
	printf("\n\nDesinfileirando %d\n",retDesinf);
	exibeFila();
	return 0;
}

void exibeFila(){
	int i;
	
	printf("[");
	for(i=0;i<tam;i++){
		printf(" %d ",fila.dados[i]);
	}
	printf("]");
}

void enfileira(int val){
	if(fila.fim == tam)
		printf("Fila cheia! Não foi possivel incluir valor.\n");
	else{
		fila.dados[fila.fim] = val;
		fila.fim++;
	}
}

int desinfileira(){
	int elemento,i;
	if(fila.ini == fila.fim){
		printf("Fila vazia!");
		return -1;
	}else{
		elemento = fila.dados[fila.ini];
		fila.fim--;
		
		for(i=0;i<fila.fim;i++){
			fila.dados[i] = fila.dados[i+1];
		}
		return elemento;	
	}
}

