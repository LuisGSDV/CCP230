#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int M[3][3], somaD = 0, i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Digite o valor de [%d][%d]: ", i, j);
			scanf("%d", &M[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(i == j){
				somaD += M[i][j];
			}
		}
	}
	
	printf("%d\n", somaD);
	system("pause");	
	return 0;
}
