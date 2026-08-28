#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	float km, passagem, kmTX= 0.50, kmMTX = 0.45;
	
	printf("Digite quanto kms voce pretende percorrer: \n");
	scanf("%f", &km);
	printf("\n");
	
	if(km >0){
		if(km < 200){
			passagem = km*kmTX;
		} else{
			passagem = km*kmMTX;
		}
	printf("O valor d a passagem eh de R$ %.2f \n", passagem);
	} else{
		printf("Distancia invalida \n");
	}

	
	system("pause");	
	return 0;
}
