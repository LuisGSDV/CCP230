#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "");
	int op;
	
	//esse menu tem código 1
	printf("Olá, digite a opção:\n\n");
	printf("1 - Logar\n");
	printf("2 - Sobre\n");
	
	scanf("%d", &op);
	
	opcao(op, 1);
	
	system("pause");	
	return 0;
}

int opcao(int a, int b){
	switch(b){
		case 1:
			switch(a){
				case 1:
					limpar(1);
					pg_logar(1);
			}
	}
	
	return 0;
}

int limpar(int a){
	if(a == 1){
		system("cls");
	}
	return 0;
}

void pg_logar(int a){
	char email[30], senha[20];
	
	system("cls");
	
	printf("digite seu email: ");
	fgets(email, sizeof(email), stdin);
	printf("%s", email);

}
