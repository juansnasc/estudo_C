#include <stdio.h>
#define TAM 5

void achaMaiorContaOcorrencias(int *vet,int size,int *maior,int *qtdOcor);

int main(){
	int omaior,vezesmaior = 0,valores[TAM] = {1,0,29,-4,1};
	
	achaMaiorContaOcorrencias(valores,TAM,&omaior,&vezesmaior);
	printf("O maior valor do array eh %d, ele aparece %d vez(es)\n",omaior,vezesmaior);
	return 0;
}

void achaMaiorContaOcorrencias(int *vet,int size,int *maior,int *qtdOcor){
	int indbig,i;
	
	*maior = *vet;
	indbig = 0;
	
	for(i=1;i<size;i++){
		if(*(vet+i) > *maior){
			*maior = *(vet+i);
			indbig = i; 
		}
	}
	
	*qtdOcor = 1;
	
	for(i=indbig+1;i<size;i++){
		if(*(vet+i) == *maior)
			(*qtdOcor)++;
	}
}
