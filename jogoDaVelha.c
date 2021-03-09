#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char mat[3][3] = {'A','B','C','D','E','F','G','H','I'};
char vertical(char simb);
char diagonal(char simb);
char horizontal(char simb);
void verificaGanhador(char par,char impar);
void exibeTabuleiro();
void marcaX(int a,int b);
void marcaBola(int a,int b);
char autenticaJog1();

int main(){
	int i=0,in1,in2,ganhador = 0;
	char primeiro,segundo;
	bool p1,p2;
	
	p1 = true;
	p2 = false;
	primeiro = autenticaJog1();
	exibeTabuleiro();
	
	if(primeiro == 'X')
		segundo = 'O';
	else
		segundo = 'X';
	system("cls");

	while(i < 9){
		exibeTabuleiro();
		if(p1){
			printf("\nJogador 1, insira a posicao a ser marcada\n");
			printf("Linha:");
			scanf("%d",&in1);
			printf("Coluna:");
			scanf("%d",&in2);
			if (primeiro == 'X'){
				marcaX(in1,in2);
			}else{
				marcaBola(in1,in2);
			}
			p1 = false;
			p2 = true;
		}else if(p2){
			printf("\nJogador 2, insira a posicao a ser marcada\n");
			printf("Linha:");
			scanf("%d",&in1);
			printf("Coluna:");
			scanf("%d",&in2);
			if (segundo == 'X'){
				marcaX(in1,in2);
			}else{
				marcaBola(in1,in2);
			}
			p1 = true;
			p2 = false;
		}
		system("cls");
		i++;	
	}
	system("cls");
	exibeTabuleiro();
	verificaGanhador(primeiro,segundo);
	return 0;
}

char autenticaJog1(){
	char in;
	printf("Jogador 1,escolha como vai jogar[X/O]:");
	scanf("%c",&in);
	while(in != 'X' && in!= 'O'){
		printf("Valor invalido,favor selecionar X ou O:");
		scanf(" %c",&in);
	}
	return in;
}

void exibeTabuleiro(){
	int i,j;
	
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%c\t",mat[i][j]);
		}
		printf("\n\n");
	}	
}

void marcaX(int a,int b){
	mat[a][b] = 'X';
}

void marcaBola(int a,int b){
	mat[a][b] = 'O';
}

char vertical(char simb){
	if(mat[0][0]==simb && mat[1][0]==simb && mat[2][0]==simb || mat[0][1]==simb && mat[1][1]==simb && mat[2][1]==simb
	|| mat[0][2]==simb && mat[1][2]==simb && mat[2][2])
		return simb;
	else
		return '0';
}

char diagonal(char simb){
	if(mat[0][0]==simb && mat[1][1]==simb && mat[2][2]==simb || mat[0][2]==simb && mat[1][1]==simb && mat[2][0]==simb)
		return simb;
	else
		return '0';	
}

char horizontal(char simb){
	if(mat[0][0]==simb && mat[0][1]==simb && mat[0][2]==simb || mat[1][0]==simb && mat[1][1]==simb && mat[1][2]==simb
	|| mat[2][0]==simb && mat[2][1]==simb && mat[2][2]==simb)
		return simb;
	else
		return '0';
}

void verificaGanhador(char par,char impar){
	char resdiagPar,resvertPar,reshorizPar;
	char resdiagImp,resvertImp,reshorizImp;
	resdiagPar = diagonal(par);
	resvertPar = vertical(par);
	reshorizPar = horizontal(par);
	resdiagImp  = diagonal(impar); 
	resvertImp = vertical(impar);
	reshorizImp = horizontal(impar);
	
	if(resdiagPar=='0' && resvertPar=='0' && reshorizPar=='0' && resdiagImp=='0' && resvertImp=='0' && reshorizImp=='0'){
		printf("\nNao houve ganhador");
		
	}else if(resdiagPar!='0'|| resvertPar!='0' || reshorizPar!='0'){
		printf("\nGanhador: Jogador %c",par);
	}else if(resdiagImp!='0' || resvertImp!='0' || reshorizImp!='0'){
		printf("\nGanhador: Jogador %c",impar);
	} 
}
