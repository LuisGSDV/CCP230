#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int *ptr = (int*) calloc(10, sizeof(int)), v[10], i;
	
	ptr = v;
	
	for(i = 0; i < 10; i++){
		v[i] = i+1;
		if(i > 0){
			printf("%d \n", *(++ptr));
		} else{
            printf("%d \n", *ptr);
		}
	}
	
	system("pause");	
	return 0;
}
