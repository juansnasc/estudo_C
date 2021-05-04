#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 26

int main(){
    int qtd,tam,inicio,fim,meio;
    char palavra[TAM];

    qtd = inicio = 0;
    
    printf("Palavra:");
    scanf("%25[^\n]s",palavra);
	
	tam = strlen(palavra);
    fim = tam-1;
    meio = fim/2;

    if(tam % 2 == 0){
        printf("Nao eh palindromo!\n");
    }else{
        strcpy(palavra,strupr(palavra));
        while(palavra[inicio] == palavra[fim] && inicio < meio){
            qtd++;
            inicio++;
            fim--;
        }

        if(qtd == meio){
            printf("Eh Palindromo\n");
        }else{
            printf("Nao eh palindromo\n");
        }
    }
    return 0;
}
