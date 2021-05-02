#include <stdio.h>

int somaValoresIntervalo(int inf,int sup){
	int i,soma = 0;
	
	i = inf+1;
	while(i<sup){
		soma += i;
		i++;
	}
	return soma;
}

int main(){
	int limInf,limSup,resultado;
	
	printf("Informe o limite inferior:");
	scanf("%d",&limInf);
	printf("Informe o limite superior:");
	scanf("%d",&limSup);
	
	resultado = somaValoresIntervalo(limInf,limSup);
	printf("A soma dos valores compreendidos no intervalo ]%d,%d[ eh %d\n",limInf,limSup,resultado);
	return 0;
}
