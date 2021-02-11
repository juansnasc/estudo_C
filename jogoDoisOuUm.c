#include <stdio.h>

    int autenticaUmouDois(){
        int entrada;
        do{
	        printf("Informe sua entrada[1 ou 2]:");
	        scanf("%d",&entrada);
        } while (entrada != 1 && entrada != 2);
	    return entrada;
    }

int main(){

    int a,c,p;
    printf("Jogador:Andre\n");
    a = autenticaUmouDois();
    printf("Jogador:Carlos\n");
    c = autenticaUmouDois();
    printf("Jogador:Pietro\n");
    p = autenticaUmouDois();

    if (((a == 1) && (c == 1) && (p == 1)) || ((a == 2) && (c == 2) && (p == 2))){
        printf("* - Empate\n");
    }else if (a == 1 && c == 1){//112
        printf("P - Pietro ganhou!\n");
    }else if (a == 1 && p == 1){//121
        printf("C - Carlos gadnhou!\n");
    }else if (c == 2 && p == 2){//122
        printf("A - Andre ganhou!\n");
    }else if (c == 1 && p == 1){//211
        printf("A - Andre ganhou!\n");
    }else if (a == 2 && p == 2){//212
        printf("C - Carlos ganhou!\n");
    }else if (a == 2 && c == 2){//221
        printf("P - Pietro ganhou!\n");
    }
}