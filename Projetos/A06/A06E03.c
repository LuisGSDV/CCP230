#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int V[10];
	int i, somaEP = 0, somaIP = 0;
	
	for(i = 0; i<10; i++){
		printf("Digite o elemento %d do vetor: \n", i+1);
		scanf("%d", &V[i]);
	}
	
	for(i = 0; i<10; i++){

		if(V[i] % 2 == 0){
			somaEP += V[i];
		}
		
		if(i % 2 == 0){
			somaIP += V[i];
		}
	}

	printf("soma dos ELEMENTOS pares: %d\n", somaIP);
	printf("soma dos elementos de INDICE par: %d\n", somaEP);
	system("pause");	
	return 0;
}
