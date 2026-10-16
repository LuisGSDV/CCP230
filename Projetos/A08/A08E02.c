#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	float a = 3.5, *ptra, b = 5.5, *ptrb, soma = 0.0;
	ptrb = &b;
	ptra = &a;
	
	soma = *ptra + *ptrb;
	
	printf("%f\n", soma);
	
	system("pause");	
	return 0;
}
