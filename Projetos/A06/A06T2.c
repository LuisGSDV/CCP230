#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int matriz[3][3];
	int i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Digite o valor para [%d][%d]\n", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
    for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("[%d]\t", matriz[i][j]);
		}
		printf("\n");
	}


	system("pause");	
	return 0;
}
