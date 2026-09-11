#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int V[5];
	int i, maior = -9999999999;

	for(i = 0; i < 5; i++){
		printf("digite o número %d: ", i+1);
		scanf("%d", &V[i]);
	}

    for(i = 0; i < 5; i++){
		if(V[i] > maior){
			maior = V[i];

		}
	}

	printf("%d\n", maior);


	system("pause");
	return 0;
}
