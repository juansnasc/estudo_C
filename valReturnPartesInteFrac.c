#include <stdio.h>

void frac(float num, int* inteiro, float* frac);

int main(){
	float valor,fraction;
	int inteira;
	
	printf("Informe um valor real:");
	scanf("%f",&valor);
	
	frac(valor,&inteira,&fraction);
	printf("\nValor:%.2f\nparte inteira:%d\nparte real: %.2f\n",valor,inteira,fraction);
	return 0;
}

void frac(float num, int *inteiro, float *frac){
	*inteiro = num;
	*frac = num - (*inteiro);
}


