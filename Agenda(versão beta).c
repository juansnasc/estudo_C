#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#define MAX 40
#define TAM 15
#define QTD 5

char menu(){
	char operacao;
	
	printf("================================ AGENDA ================================ [versใo beta]\n");
	printf("\t\t\t0 - Encerrar\n");
	printf("\t\t\t1 - Adicionar novo contato\n");
	printf("\t\t\t2 - Mostra n๚meros cadastrados\n");
	printf("\n\t\t\tInforme a opera็ใo desejada:");
	scanf("%c",&operacao);
	fflush(stdin);
	system("cls");
	return operacao;
}

struct agenda{
	int cod;
	char nome[MAX];
	char telefone[TAM];
	char email[MAX];
};

int main(){
	setlocale(LC_ALL,"portuguese");
	
	struct agenda contatos[QTD];
	bool vazia = false;
	int j,i = 0;
	char op;
	
	op = menu();
	
	while(op != '0'){
		switch(op){
			case '1':
				if (i < QTD){
					contatos[i].cod = rand() %100;
					printf("Nome:");
					fgets(contatos[i].nome,MAX,stdin);
					printf("Telefone:");
					fgets(contatos[i].telefone,TAM,stdin);
					printf("E-mail:");
					fgets(contatos[i].email,MAX,stdin);
					i++;
				}else
					printf("Agenda lotada!\n\n");
				system("pause");
				break;
			case '2':
				if(i == vazia)
					printf("Agenda vazia!\n\n");
				else{
					system("cls");
					printf("\n\t\t\tCLIENTES CADASTRADOS\n");
					printf("จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ\n");
					for(j=0;j<i;j++){
						printf("\t\t\tC๓digo do cliente: %d\n",contatos[j].cod);
						printf("\t\t\tNome: %s",contatos[j].nome);
						printf("\t\t\tTelefone: %s",contatos[j].telefone);
						printf("\t\t\tE-mail: %s",contatos[j].email);
						printf("จจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจจ\n");
					}
				}
				system("pause");
				system("cls");
				break;	
			default:
				printf("\n\t\t\tERRO:Op็ใo Invแlida!\n\n");
				system("pause");
		}
		system("cls");
		op = menu();
	}
	return 0;
}
