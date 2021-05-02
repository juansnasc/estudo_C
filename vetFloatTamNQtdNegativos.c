#include <stdio.h>
#define TAM 4

int negativos(float *vet, int N){
	int i,qtdNeg = 0;
	
	for(i=0;i<N;i++){
		if(*(vet+i) < 0)
			qtdNeg++;
	}
	return qtdNeg;
}

int main(){
	float valores[TAM] = {-3,-19,-2,-1};
	int resultado;
	
	resultado = negativos(valores,TAM);
	printf("No vetor, contam %d valores negativos\n",resultado);
	return 0;
}
