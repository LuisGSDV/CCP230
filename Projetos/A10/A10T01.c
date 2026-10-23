#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE*arquivo;
	int conta;
	char nome[100];

	arquivo = fopen("clientes.txt", "w");

	if(arquivo == NULL){
		printf("Erro ao tentar abrir o arquivo!\n");
		return 1;
	}

	printf("Digite a conta (0 para sair):\n");
	scanf("%d", &conta);

	while(conta != 0){
		printf("Digite o nome: ");
		scanf("%[^\n]", nome);

		fprintf(arquivo, "%d %s\n", conta, nome);

		printf("Digite a conta (0 para sair):\n");
		scanf("%d", &conta);
	}

	fclose(arquivo);
	printf("Dados gravados com sucesso!\n");

	system("pause");
	return 0;
}
