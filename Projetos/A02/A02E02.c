#include <stdio.h>
#include <stdlib.h>

// revisar

int main(int argc, char *argv[]) 
{
	int dia, hora, minuto, segundo, segTotal;
	segTotal = 0;
	
	printf("Digite respectivamente uma quantidade de dias, horas, minutos e segundos:");
	
	scanf("%d", &dia);
	scanf("%d", &hora);
	scanf("%d", &minuto);
	scanf("%d", &segundo);
	
	if(dia >= 0 && hora >= 0 && minuto >=0 && segundo >= 0){
		segTotal = (dia*24*60*60) + (hora*60*60) + (minuto*60) + segundo;
		printf("Numero total de segundos: %d /n", segTotal);
	} else {
		printf("Tempo inválido. /n");
	}
	
	system("pause");
	return 0;
}
