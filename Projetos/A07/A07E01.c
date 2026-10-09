#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
	char v1[1], v2[1], v3[1], v4[1];
	int i, soma = 0, vi1 = 0, vi2 = 0, vi3 = 0, vi4= 0;

	/*for(i=0; i<4 ;i++){
		fgets(vl[i], 4, stdin);
	}*/
	
	fgets(v1, sizeof(4), stdin);
    fgets(v2, sizeof(4), stdin);
    fgets(v3, sizeof(4), stdin);
    fgets(v4, sizeof(4), stdin);
    
    vi1 = atoi(v1);
    vi2 = atoi(v2);
    vi3 = atoi(v3);
    vi4 = atoi(v4);
    
    printf("%d\n", vi1);
    printf("%d\n", vi3);
    printf("%d\n", vi4);
	soma = vi1 + vi2 + vi4 + vi3;
	
	// funcao atoi converte string em int
	
	printf("%d", soma);
	
	system("pause");	
	return 0;
}
