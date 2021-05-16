#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define tam 35
#define max 45
#define qtd 9

struct tlivro{
	int codigo;
	char nomeLivro[tam];
	char autor[max];
};

struct tpilhadevolucao{
	struct tlivro recepcao[qtd];
	int ini;
	int topo;
};

//variavel global que age como a pilha da situacao
struct tpilhadevolucao recebidos;

void menu(){
	printf("************MENU*************\n");
	printf("0 - Sair\n");
	printf("1 - Listar livros presentes na pilha de devolução\n");
	printf("2 - Inserir livro\n");
	printf("3 - Retirar livro\n");
}

void empilha(){ //(C)
	if(recebidos.topo == qtd)
		printf("Impossível incluir, pilha cheia!\n");
	else{
		printf("Título:");
		scanf(" %34[^\n]s",&recebidos.recepcao[recebidos.topo].nomeLivro);
		printf("Autor:");
		scanf(" %44[^\n]s",&recebidos.recepcao[recebidos.topo].autor);
		printf("Código:");
		scanf(" %d",&recebidos.recepcao[recebidos.topo].codigo);
		recebidos.topo++;
	}
}

void exibeDevolucoes(){ //(E)
	int i;
	if(recebidos.ini == recebidos.topo){
		printf("Pilha vazia, não constam livros devolvidos!\n\n");
	}else{
		printf("\nPilha de Livros Recebidos\n");
		for(i=0;i<recebidos.topo;i++){
			printf("\nTítulo:%s",recebidos.recepcao[i].nomeLivro);
			printf("\nAutor:%s",recebidos.recepcao[i].autor);
			printf("\nCódigo:%d\n",recebidos.recepcao[i].codigo);
		}
	}	
}

int desempilha(){ //(D)

	int elemento;
	
	if(recebidos.topo == recebidos.ini){
		printf("Pilha vazia, não constam livros devolvidos!\n");
		return -1;
	}else{
		recebidos.topo--;
		elemento = recebidos.recepcao[recebidos.topo].codigo;
		strcpy(recebidos.recepcao[recebidos.topo].autor,"");
		strcpy(recebidos.recepcao[recebidos.topo].nomeLivro,"");
		recebidos.recepcao[recebidos.topo].codigo = 0;
		return elemento;
		}
}

int main(){
	int i,retDesin,op = -1;
	
	setlocale(LC_ALL,"portuguese");
	
	while(op){
		menu();
		printf("Selecione:");
		scanf("%d",&op);
		
		if(op){
			switch(op){
				case 1:
					exibeDevolucoes();
					system("pause");
					break;
				case 2:
					system("CLS");
					empilha();
					break;
				case 3:
					retDesin = desempilha();
					system("pause");
					break;
			}
		}
		system("CLS");
	}
	return 0;
}
