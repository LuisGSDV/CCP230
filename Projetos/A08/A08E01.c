#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int x = 5, *ptri = NULL;
	float pi = 3.14, *ptrf = NULL;
	char a = 'a', *ptrc = NULL;
	
	printf("valor de int %d\n", x);
	printf("valor de real %f\n", pi);
	printf("valor de x %c\n", a);
	
	ptri = &x;
	ptrf = &pi;
	ptrc = &a;
	
	*ptri = 7;
	*ptrf = 6.28;
	*ptrc = 'b';
	
	
	printf("valor de int %d\n", x);
	printf("valor de real %f\n", pi);
	printf("valor de x %c\n", a);
	
	system("pause");	
	return 0;
}
