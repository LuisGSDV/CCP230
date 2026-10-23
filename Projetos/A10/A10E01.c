#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	FILE *par;
	FILE *impar;
	int i;
	
	par = fopen("par.txt", "w");
	impar = fopen("impar.txt", "w");
	
	for(i = 0; i < 999; i++){
		if(i%2==0){
			fprintf(par, "%d\n", i);
		} else{
			fprintf(impar, "%d\n", i);
		}
	}
	
	system("pause");	
	return 0;
}
