#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

enum meses{
	jan, fev, mar, abr, mai, jun, jul, ago, set, oct, nov, dez
} mes;

int main(int argc, char *argv[]) 
{
	printf("Digite os 3 primeiros digitos mês que você quer detalhar:\n");
	scanf("%d", &mes);
	switch(mes){
		case jan:
			printf("31 dias\n");
			break;
        case fev:
			printf("28 dias\n");
			break;
	}

	system("pause");	
	return 0;
}
