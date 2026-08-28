#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int op, a, b, res;
	
	printf("0. soma \n");
	printf("1. subtracao \n");
	printf("2. multiplicacao \n");
	printf("3. divisao \n");
	
	printf("Digite o valor da operação que deseja realizar \n");
	scanf("%d", &op);
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &a);
	
	printf("Digite o segundo valor: \n");
	scanf("%d", &b);

	if( op >= 0 && op <= 3){

		switch(op){
			case 0:
				res = a+b;
				break;
			case 1:
				res = a-b;
				break;
			case 2:
				res = a*b;
				break;
			case 3:
				res = a/b;
				break; // poderia usar default pra que outro valores desse um print de inválido
		}
		
		printf("Resultado: %d", res);
		printf("\n");
		
	}else{
		printf("operacao inválida");
	}
			

	system("pause");	
	return 0;
}
