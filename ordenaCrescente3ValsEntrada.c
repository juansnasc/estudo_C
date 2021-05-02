#include <stdio.h>

int ordenaTres(int *n1,int *n2,int *n3){
	int maior,menor,meio;
	if(*n1 == *n2 && *n2 == *n3){
		return 1;
	}else{
		if(*n1>*n2 && *n1>*n3){
			maior = *n1;
			if(*n2 > *n3){
				meio = *n2;
				menor = *n3;
			}else{
				meio = *n3;
				menor = *n2;
			}
		}else if(*n2 > *n1 && *n2 > *n3){
			maior = *n2;
			if(*n1 > *n3){
				meio = *n1;
				menor = *n3;
			}else{
				meio = *n3;
				menor = *n1;
			}
		}else{
			maior = *n3;
			if(*n1 > *n2){
				meio = *n1;
				menor = *n2;
			}else{
				meio = *n2;
				menor = *n1;
			}
		}
		*n1 = menor;
		*n2 = meio;
		*n3 = maior;
		return 0;
	}
}

int main(){
	int a,b,c,resultado;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	resultado = ordenaTres(&a,&b,&c);
	
	if(resultado){
		printf("\nValores iguais\n");
	}else{
		printf("\n%d %d %d\n",a,b,c);
	}
	return 0;
}
