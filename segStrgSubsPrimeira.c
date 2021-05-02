#include <stdio.h>
#include <string.h>

int segOcorrPrimStrg(char *n1,char *n2){
	int tam1,tam2,i,j,k,tamrestum,cont1,cont2,posRest;
	
	tam1 = strlen(n1);
	tam2 = strlen(n2);
	cont2 = 0;
	cont1 = 0;
	i = 0;
	j = 0;
	
	if(tam2 > tam1){ // dois maior que a um
		return 0;
	}else{
		while(*(n1+i) !='\0' && *n2 != *(n1+i)){
			i++;
			if(*n2 == *(n1+i) ){
				cont1 = 1;
				cont2 = 1;
				//printf("Primeira ocorrencia igual, posicao %d de string 1\n",i);
		  	}
		}
		if(!cont1)
			return 0;
		else{
			i++;
			j++;
			while (*(n2+j) != '\0'){
				if(*(n2+j) == *(n1+i))
					cont2++;
				j++;
				i++;
			}
		}
		if(cont2 == tam2)
			return 1;
		else
			return 0;
	}
}

int main(){
	char nome1[] = "Juan", nome2[] = "ua", nome3[] = "Carlos";
	int result;
	
	//result = segOcorrPrimStrg(nome1,nome2);
	result = segOcorrPrimStrg(nome1,nome3);
	
	if(result){
		printf("String 2 esta contida na string 1!\n");
	}else{
		printf("String 2 nao esta contida na string 1!\n");
	}
	printf("O resultado foi %d\n",result);
	
	return 0;
}
