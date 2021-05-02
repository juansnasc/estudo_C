w#include <stdio.h>

int somaValoresIntervalo(int inf,int sup){//2  5
	int i,soma = 0;
	
	i = inf+1;//i = 3
	while(i<sup){
		soma += i;
		i++;// i = 5
	}
	return soma;//7
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
