#include <stdio.h>
#define TAM 4

void exibeArray(int *vet,int tam){
	int i;
	for(i=0;i<tam;i++){
		printf("%d\t",*(vet+i));
	}
}

int somaVets(int *v1,int tam1,int *v2,int tam2,int *v3,int tam3){
	int i;
	if(tam1 != tam2)
		return 0;
	else{
		for(i=0;i<tam1;i++){
			*(v3+i) = *(v1+i) + *(v2+i);
		}
		return 1;
	}
}

int main(){
	int result, soma[TAM], ar2[2] = {1,3}, ar1[TAM] = {10,20,30,40};
	
	exibeArray(ar1,TAM);
	printf("\n");
	exibeArray(ar2,TAM);
	result = somaVets(ar1,TAM,ar2,2,soma,TAM);
	
	if(result){
		printf("\nSoma realizada!\n");
		exibeArray(soma,TAM);
	}else
		printf("\nSoma nao realizada, vetores possuem tamanhos distintos\n");
	return 0;
}
