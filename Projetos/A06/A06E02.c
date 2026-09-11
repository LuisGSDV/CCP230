#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int V[5], idx;

	
	for(idx = 0; idx < 5; idx++){
		printf("digite o numero %d: ", idx+1);
		scanf("%d", &V[idx]);
	}
	
	printf("ORDEM INVERSA: \n\n");
	
    for(idx = 4; idx >= 0; idx--){
		printf("%d \n", V[idx]);
	}


	system("pause");	
	return 0;
}
