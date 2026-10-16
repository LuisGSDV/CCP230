#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{
	int x, y, *endx, *endy; // se x for declarado deps de y, comportamento inverte
	setlocale(LC_ALL, "");
	
	printf("digite o valor da primeira variavel: ");
	scanf("%d", &x);
	printf("digite o valor da segunda variavel: ");
	scanf("%d", &y);
	
	endx = &x;
	endy = &y;
	
	if(endx > endy){
        printf("o endereço da primeira variavel é maior ");
		printf("%p\n", endx);
	}else{
		printf("o endereço da segunda variavel é maior ");
        printf("%p\n", endy);
	}
	
	system("pause");	
	return 0;
}
