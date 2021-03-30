#include <stdio.h>

int divs(int n,int *max,int *min);

int main(){
	int numero,menor,maior,resultado;
	
	printf("Informe um valor inteiro e positivo:");
	scanf("%d",&numero);
	
	resultado = divs(numero,&maior,&menor);
	if(!resultado)
		printf("%d eh primo, min:%d,max:%d\n",numero,menor,maior);
	else
		printf("%d nao eh primo, min:%d,max:%d\n",numero,menor,maior);
	return 0;
}

int divs(int n,int *max,int *min){
	int i,valSegDiv,qtdDivs = 1;
	
	*min = *max = 1;
	for(i=2;i<n;i++){
		if(n%i==0){
			qtdDivs++;
			*max = i;
			if(qtdDivs == 2)
				valSegDiv = i;
		}
	}
	if(qtdDivs==1){
		*max = n;
		return 0;
	}
	*min = valSegDiv;
	return 1;
}
