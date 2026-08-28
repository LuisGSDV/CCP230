#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n1, n2;
	printf("Digite um numero\n");
	scanf("%f", &n1);
	printf("Digite outro numero\n");
	scanf("%f", &n2);
	float soma = n1 + n2;
	printf("Soma = %.2f", soma);
	printf("\n");
	system("pause");	
	return 0;
}
