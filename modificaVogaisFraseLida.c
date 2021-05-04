#include <stdio.h>
#define TAM 10

void exibeStr(char *sword);
void trocaVogais(char *sword);

int main(){
	char frase[TAM];
	
	printf("Informe uma frase:");
	scanf("%9[^\n]s",frase);
	
	printf("Frase lida:%s\n",frase);
	
	trocaVogais(frase);
	printf("Frase final:");
	exibeStr(frase);
	return 0;
}

void exibeStr(char *sword){
	int i;
	while(*(sword+i) != '\0'){
		printf("%c",*(sword+i));
		i++;
	}
}

void trocaVogais(char *sword){
	int i;
	
	while(*(sword+i) != '\0'){
		switch(*(sword+i)){
			case 'a':
			case 'A':
				*(sword+i) = 'u';
				break;
			case 'e':
			case 'E':
				*(sword+i) = 'o';
				break;
			case 'i':
			case 'I':
				*(sword+i) = 'u';
				break;
			case 'o':
			case 'O':
				*(sword+i) = 'a';
				break;
			case 'u':
			case 'U':
				*(sword+i) = 'e';
				break;
		}
		i++;
	}
}
