#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	// revisar
	int dia;
	float km, kmTx, diaTx, total;
	
	kmTx = 0.15;
	diaTx = 60;
	
	printf("Digite a quantidade de dias com o carro alugado: \n");
	scanf("%d", &dia);
    printf("Digite a quantidade de kms percorridos com o carro alugado: \n");
    scanf("%f", &km);
    
    total = km*kmTx + dia*diaTx;
    
    printf("O custo total ficou em: R$ %.2f \n", total); // n tem & no printf
	system("pause");	
	return 0;
}
