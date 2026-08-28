#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	float alt, peso;
	
	printf("Digite a altura: \n");
	scanf("%f", &alt);
	
	peso = (72.7*alt) - 58;
	printf("O peso ideal pra essa pessoa eh de: %.2f \n", peso);
	system("pause");	
	return 0;
}
