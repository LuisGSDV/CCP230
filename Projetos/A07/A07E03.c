#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	char texto[100], maiusculas[100], minusculas[100];
	int i;
	
	printf("Digite uma linha de texto: ");
	fgets(texto, sizeof(texto), stdin);
	
	for(i = 0; texto[i] != '\0'; i++){
		minusculas[i] = toupper((unsigned char)texto[i]);
        maiusculas[i] = tolower((unsigned char)texto[i]);
	}

	maiusculas[i] = '\0';
	minusculas[i] = '\0';
	
	puts("\nTexto em maiusculas:");
	puts(maiusculas);
	
	puts("Texto em minusculas");
	puts(minusculas);
	
	system("pause");	
	return 0;
}
