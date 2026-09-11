#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int x = 0, soma = 0, y = 0, m, i;
	
	for(i = 0 ; i <5; i++){
		scanf("%d", &x);
		soma += x;
		y += 1;
	}
	
	m = soma/y;
	
	printf("%d\n", m);
	system("pause");	
	return 0;
}
