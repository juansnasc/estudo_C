#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#define TAM 20
#define SIZ 26
#define MAX 46

struct livro{
    int codigo;
    char titulo[MAX];
    char autor[MAX];
    char area[SIZ];
    int ano;
    char editora[SIZ];
};

int main(){;
    int codBusc,i,j,op = 0;
    bool naoachou = true;
    struct livro obras[TAM], aux;

    do{
        printf("===================================MENU===================================\n");
        printf("1. Cadastrar os livros\n");
        printf("2. Imprimir as informacoes dos livros\n");
        printf("3. Pesquisar livros por codigo\n");
        printf("4. Ordenar os livros por ano\n");
        printf("5. Sair do programa\n");
        printf("Selecione:");
        scanf("%d",&op);

        switch (op){
        case 1:
            system("cls");
            for(i=0;i<TAM;i++){
                printf("\n%d.a obra\n",i+1);
                printf("Codigo:");
                scanf("%d",&obras[i].codigo);
                printf("Titulo:");
                scanf(" %45[^\n]s",obras[i].titulo);
                printf("Autor:");
                scanf(" %45[^\n]s",obras[i].autor);
                printf("Area:");
                scanf(" %24[^\n]s",obras[i].area);
                printf("Ano:");
                scanf(" %d",&obras[i].ano);
                printf("Editora:");
                scanf(" %25[^\n]s",obras[i].editora);
            }
            break;
        case 2:
            system("cls");
            for(i=0;i<TAM;i++){
                printf("Codigo:%d\n",obras[i].codigo);
                printf("Titulo:%s\n",obras[i].titulo);
                printf("Autor:%s\n",obras[i].autor);
                printf("Area:%s\n",obras[i].area);
                printf("Ano:%d\n",obras[i].ano);
                printf("Editora:%s\n",obras[i].editora);
                printf("-----------------------------------------------------\n");
            }
            break;
        case 3:
            i = 0;
            printf("Informe o codigo do livro procurado:");
            scanf("%d",&codBusc);

            while(i < TAM && naoachou){
                if(obras[i].codigo == codBusc){
                    naoachou = false;
                    printf("Busca finalizada, obra consta no sistema!\n");
                }else{
                    i++;
                }
            }

            if(i == TAM){
                printf("Busca finalizada, obra nao consta no sistema!\n");
            }
            break;
        case 4:
            for(i=0;i<TAM-1;i++){
                for(j=i+1;j<TAM;j++){
                    if(obras[i].ano > obras[j].ano){
                        aux = obras[j];
                        obras[j] = obras[i];
                        obras[i] = aux; 
                    }
                }
            }
            break;
        case 5:
            printf("Fim do Programa\n");
            break;
        default:
            printf("Valor invalido!\n");
            break;
        }
    }while(op != 5);
    return 0;
}

/*op, variavel para andar pelo menu, no switchcaseh
1 - vetor[20] de livros, i para percorrer vetor,
2 - i p percorrer vetor
3 - codBusc, inteiro, livro procurado, i iterar pelo vetor inteiro;
4 - aux livro, como variavel auxiliar quando fhor trocar a ordem de algum elemento
5- comparaçao simples, verificar se TUDO é diferente dele*/

