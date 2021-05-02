#include <stdio.h>
#define TAM 10

int main(){
    int vals[TAM],i,j,repetido[TAM] = {};

    for(i=0;i<TAM;i++){
        printf("Valor:",vals[i]);
        scanf("%d",&vals[i]);
    }

    for(i=0;i<TAM;i++){
        for(j=i+1;j<TAM;j++){
            if(vals[i]==vals[j])
              repetido[j] = 1;
        }
    }

    printf("\nVetor sem repeticoes\n");
    for(i=0;i<TAM;i++){
        if(!repetido[i]){
            printf("%d ",vals[i]);
        }
    }
    return 0;
}
