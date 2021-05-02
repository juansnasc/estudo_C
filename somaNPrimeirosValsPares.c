#include <stdio.h>

int somaNPrimeirosPares(int qtd){
	int i=0,cont=0,sum=0;
	
	while(cont != qtd){
		sum += i;
		++cont;
		i+=2;
	}
	return sum;
}

int main(){
	int soma,N;
	
	printf("Quantidade de pares a serem somados:");
	scanf("%d",&N);
	
	soma = somaNPrimeirosPares(N);
	printf("Resultado da soma dos N primeiros numeros pares:%d\n",soma);
	return 0;
}


