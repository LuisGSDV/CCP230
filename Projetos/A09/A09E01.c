#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int *ptri;
	char *ptrc;
	float *ptrf;
	
	ptri = malloc(sizeof(int));
	*ptri = 76;
	
	ptrc = malloc(sizeof(char));
	*ptrc = 'a';
	
	ptrf = malloc(sizeof(float));
	*ptrf = 3.14;
	
	
	printf("%c \n", *ptrc);
	free(ptrc);
	
	printf("%d \n", *ptri);
	free(ptri);
	
	printf("%f \n", *ptrf);
	free(ptrf);
	
	system("PAUSE");
	return 0;
}
