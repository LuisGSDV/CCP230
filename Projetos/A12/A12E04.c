#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[100];
	int mat;
	char curso[30]
}dadosAl;

int main(int argc, char *argv[]) 
{
	dadosAl aluno[2];
	int i;
	
	for(i = 0 ; i< 2; i++){
		printf("Digite os dados do aluno %d:\n", i+1);
		printf("Digite o nome do aluno:\n");
		scanf("%s", &aluno[i].nome);
		printf("Digite a matricula do aluno:\n");
		scanf("%d", &aluno[i].mat);
		printf("Digite o curso do aluno:\n");
		scanf("%s", &aluno[i].curso);
		printf("\n\n");
		
		printf("Dados do aluno %d-------------\n", i+1);
		printf("Nome do aluno : %s\n", aluno[i].nome);
		printf("Matricula do aluno : %d\n", aluno[i].mat);
		printf("Curso do aluno : %s\n", aluno[i].curso);
		printf("\n\n");
	}
		

	system("pause");	
	return 0;
}
