#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
	char nome[100];
	int idade;
	int codigo;
	char sexo;
	int salario;
}tipoFunc;

void lerDados(tipoFunc *p){
	printf("nome:\n");
	scanf("%s", p->nome);
	printf("idade:\n");
	scanf("%d", &p->idade);
	printf("código:\n");
	scanf("%d", &p->codigo);
	printf("sexo:\n");
	scanf(" %c", &p->sexo);
	printf("salario:\n");
	scanf("%d", &p->salario);
}

void saidaDados(tipoFunc *p){
	printf("dados------------------\n");
	printf("nome:%s\n", (*p).nome);
	printf("idade:%d\n", (*p).idade);
	printf("codigo:%d\n", (*p).codigo);
	printf("sexo:%c\n", (*p).sexo);
	printf("salario:%d\n", (*p).salario);
}

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "");
	
	tipoFunc func;
	
	lerDados(&func);
	saidaDados(&func);
	
	
	system("pause");	
	return 0;
}
