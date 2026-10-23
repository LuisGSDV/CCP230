#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	FILE *arquivo;
	char linha[200];
	
	arquivo = fopen("clientes.txt", "r");
	
	if(arquivo == NULL){
		printf("Erro ao abrir o arquivo!\n");
		return 1;
	}
	
	while(fgets(linha, sizeof(linha), arquivo) != NULL){
		printf("%s", linha);
	}
	
	fclose(arquivo);
	
	system("pause");
	return 0;
}
