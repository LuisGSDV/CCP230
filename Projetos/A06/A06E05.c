#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int M[4][4];
	int i, j, soma = 0;
	int V[4];
	
	for(i = 0; i<4; i++){
		for(j = 0; j<4; j++){
			printf("Dgite o valor do elemento [%d][%d]", i, j);
			scanf("%d", &M[i][j]);
		}
	}
	
	for(i = 0; i<4; i++){
		for(j = 0; j<4; j++){
			if (M[i][j] % 2 == 1){
				V[i] = M[i][j];
				soma += M[i][j];
			}
		}
	}
	
	printf("%d\n", soma);
	
	
	
	system("pause");	
	return 0;
}
