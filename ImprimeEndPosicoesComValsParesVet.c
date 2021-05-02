#include <stdio.h>

int main(){
	int i,dados[5];
	
	for(i=0;i<5;i++){
		scanf("%d",dados+i);
	}
	
	printf("\n");
	for(i=0;i<5;i++){
		if( *(dados+i) % 2 == 0)
			printf("%p\t",dados+i);
		else
			printf("X\t");
	}
	return 0;
}
