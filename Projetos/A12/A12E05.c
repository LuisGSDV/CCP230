#include <stdio.h>
#include <stdlib.h>

int soma(int n){
	return n+1;
}

void iterate(int vet[], int tam, int add1){

	int i;
	
	for(i = 0; i < tam ; i++){
		vet[i] = add1(vet[i]);
	}
}

int main(int argc, char *argv[]) 
{
	int v[] = {1,2,3,4,5,6};
	int(*add1)(int);
	
	add1 = soma;
	
	iterate(v, 6, add1);

	system("pause");	
	return 0;
}
