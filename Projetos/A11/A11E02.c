#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	char nome[100];
	char tipoMsc[100];
	int nInt;
}tipoBnd;

int main(int argc, char *argv[]) 
{
	int i;
	tipoBnd bnd[2];

	for(i = 0; i < 2; i++){
		printf("Nome da Banda %d:\n", i+1);
		scanf("%s", &bnd[i].nome);
		printf("Tipo de musica:\n");
		scanf("%s", &bnd[i].tipoMsc);
		printf("Numero de integrantes:\n");
		scanf("%d", &bnd[i].nInt);
		printf("\n");
	}
	
	for(i = 0; i < 2; i++){
		printf("\n");
		printf("Banda %d: \n", i+1);
	    printf("Nome: %s\n", bnd[i].nome);
		printf("Tipo de música: %s\n", bnd[i].tipoMsc);
		printf("Quantd. de integrantes: %d\n", bnd[i].nInt);
	}


	system("pause");	
	return 0;
}
