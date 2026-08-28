#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int a, b , aux;
	
	printf("Digite o valor da variavel A: \n");
	scanf("%d", &a);
	
	printf("Digite o valor de B: \n");
	scanf("%d", &b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("Valor de A dps da troca: %d \n", a);
	printf("Valor de B dps da troca: %d \n", b);
	printf("\n");
	system("pause");	
	return 0;
}
