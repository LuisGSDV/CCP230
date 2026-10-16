#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int index, vetor[10], *pVetor;
	pVetor = vetor;
	
	for(index=0; index < 10; index++){
		vetor[index] = 0;
	}
	
	for(index=0; index<10;index+=2){
		*(pVetor+index) = 6;
	}
	
	for(index =1; index < 10; index+=2){
		*(pVetor+index) = 4;
	}
	
	printf("Vetor [ ");
	for(index= 0; index < 10; index++){
		printf("%d ", *(pVetor+index));
	}
	
	printf("]\n");
	system("pause");	
	return 0;
}
