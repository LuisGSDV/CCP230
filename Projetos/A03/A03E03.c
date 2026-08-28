#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	float desc, descF = 0.05, descC = 0.03, compra;
	int tipoP;
	
	printf("Digite o valor da compra: \n");
	scanf("%f", compra);
	
	printf("Digite qual tipo de cliente é: \n");
	printf("1. Cliente comum \n");
	printf("2. Cliente funcionário \n");
	scanf("%d", tipoP);

	if(compra > 0){

		if(tipoP = 1 || tipoP = 2){

			if(tipoP = 1 and compra > 1000){
				desc = descF + descC;
			}else if(tipoP = 1 and compra < 1000 || tipo = 2){
				desc = descC;}
				
		}else{
			printf("cliente inválido \n");
		
	}else{
		printf("Valor inválido \n");
	}}
	
	//revisar

	
	system("pause");	
	return 0;
}
