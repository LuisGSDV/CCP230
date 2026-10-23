#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "");
	int n, i, soma = 0, num;
	
	printf("Digite quantos inteiros:\n");
	scanf("%d", &n);

	int *ptr = (int*) calloc(n, sizeof(int));
	
	for(i=0; i < n; i++){
		printf("Digite o numero da posição [%d] do vetor: \n", i);
		scanf("%d", &num);
		if(i > 0){
            *(++ptr) = num;
		} else{
			*ptr = num;
		}
		soma += *ptr;
	}
	
	printf("soma: %d\n", soma);


	system("pause");	
	return 0;
}
