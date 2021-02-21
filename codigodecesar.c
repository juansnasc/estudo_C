#include <stdio.h>

int main(){
    //char letra = 'A';
    char frase[60];
    int i=0;

    /*printf("%c\n",letra);
    printf("%c\n",letra+3);*/
    printf("Frase a ser decodificada:");
    scanf("%59[^\n]s",frase);
    printf("String inicial:%s\n",frase);
    
    while(frase[i] != '\0'){
        if (frase[i] != ' ')
           frase[i] = frase[i]-29;
        i++;
    }

    printf("String final:%s\n",frase);
    return 0;
}