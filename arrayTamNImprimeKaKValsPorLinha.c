#include <stdio.h>
#define N 5

int achaMaiorImprimeKaKPorLinha(int *vet,int siz,int k){
	int maior,i,cont = 0;
	
	printf("\nLeitura dos valores via teclado\n");
	for(i=0;i<N;i++){
		scanf("%d",(vet+i));
	}
	
	maior = *vet;
	
	for(i=1;i<N;i++){
		if(*(vet+i) > maior)
			maior = *(vet+i);
	}
	
	i = 0;
	printf("\nExibe dados\n");
	while(i < N){
		cont = 0;
		if (k == 1){
			for(i=0;i<N;i++){
				printf("%d ",*(vet+i));
				printf("[%d]\n", maior);
			}
		}else{
			while(cont < k && i != N){
				printf("%d ",*(vet+i));
				cont++;
				i++;
			}
			printf("[%d]\n", maior);
		}
	}
	return maior;
}

int main(){
	int resultado,vezes,valores[N];
	
	printf("Quantidade de valores por linha:");
	scanf("%d",&vezes);
	
	resultado = achaMaiorImprimeKaKPorLinha(valores,N,vezes);
	printf("\nO maior valor da sequencia eh %d\n",resultado);
	return 0;
}
