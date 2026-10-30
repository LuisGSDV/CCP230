#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

enum triangs{
	equil, isos, escl
}tpTriang;

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "");
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if(a == b && b == c){
		tpTriang = equil;
	}else if(a == b || b == c || a == c){
		tpTriang = isos;
	}else{
		tpTriang = escl;
	}
	
	switch(tpTriang){
		case 0:
			printf("Equilátero\n");
			break;
        case 1:
			printf("Isósceles\n");
			break;
		case 2:
			printf("Escaleno\n");
			break;
	}
			
	
	system("pause");	
	return 0;
}
