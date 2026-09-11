#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int vetor[5];
	int index;
	for (index = 0; index < 10; index++){
		printf("Digite o valor para a posicao [%d]:\n", index);
		scanf("%d", &vetor[index]);
	}
	
	for (index = 0; index < 10; index++){
		printf("[%d]\t", vetor[index]);
	}
	system("pause");
	return 0;
}
