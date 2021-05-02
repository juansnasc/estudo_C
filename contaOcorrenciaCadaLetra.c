#include <stdio.h>
#define TAM 10

void inicializador(int *vet,int tam);
void exibe(char *str,int tam,int *qtdvezes);
void contaOcorrencias(char *str,int tam,int *qtdvezes);

int main(){
	char word[TAM] = "uma casa";
	int ocorrencias[TAM];
	
	inicializador(ocorrencias,TAM);
	contaOcorrencias(word,TAM,ocorrencias);
	exibe(word,TAM,ocorrencias);
	return 0;
}

void inicializador(int *vet,int tam){
	int i;
	for(i=0;i<tam;i++){
		*(vet+i) = -1;
	}
}

void exibe(char *str,int tam,int *qtdvezes){
	int i;
	
	printf("'%c' = %d ",str[0],qtdvezes[0]);
	for(i=1;i<tam;i++){
		if(qtdvezes[i] >= 1)
			printf(",'%c' = %d",str[i],qtdvezes[i]);
	}
}

void contaOcorrencias(char *str,int tam,int *qtdvezes){
	int j,i = 0;
	
	while(str[i] != '\0'){
		for(j=0;j<tam;j++){
			if(str[i]==str[j] && qtdvezes[j]<0){
				qtdvezes[j] = 0;
				if(i==j)
					qtdvezes[i] = 1;
				else
					qtdvezes[i]++;
			}
		}
		i++;
	}
}
