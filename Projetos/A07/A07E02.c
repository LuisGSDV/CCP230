#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{
    setlocale(LC_ALL, "Portuguese");
	char s1[50], s2[50], s3[50], s4[50];
	float n1, n2, n3, n4, soma;
	
	printf("Digite o primeiro numero:");
	fgets(s1, sizeof(s1), stdin);
	
	printf("Digite o segundo numero:");
	fgets(s2, sizeof(s2), stdin);
	
	printf("Digite o terceiro numero:");
	fgets(s3, sizeof(s3), stdin);
	
	printf("Digite o quarto numero:");
	fgets(s4, sizeof(s4), stdin);
	
	n1 = strtof(s1, NULL);
	n2 = strtof(s2, NULL);
	n3 = strtof(s3, NULL);
	n4 = strtof(s4, NULL);
	
	soma = n1 + n2 + n3+ n4;
	
	printf("A soma dos quatro valores é: %.2f\n", soma);
	
	
	system("pause");	
	return 0;
}
