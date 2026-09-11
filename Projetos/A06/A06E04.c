#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) 
{
	int M[10][15];
	int i,j, n;
	srand(time(NULL));
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 15; j++){
			n = rand() % 100;
			M[i][j] = n;
		}
	}
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 15; j++){
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
	
	printf("\n--------------------------------------\n\n");
	
	for(i = 0; i < 10; i++){
		printf("%d\n", M[i][0]);
	}

	
	system("pause");	
	return 0;
}
