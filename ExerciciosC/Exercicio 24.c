#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*24. Leia um n�mero inteiro de 4 d�gitos e imprima 1 d�gito por linha*/
int main(){
    setlocale(LC_ALL,"portuguese");
	int count, vetor[4];
	printf("Digite 4 n�meros inteiros\n");
	for(count = 1; count <= 4;count++){
        printf("Digito %d - ", count);
        scanf("%d", &vetor[count]);
	}
	printf("\n==============EXBINDO VALORES, 1 DIGITO POR LINHA =================\n");
	for(count = 1; count <= 4; count++){
        printf("Digito%d - %d\n",count, vetor[count]);

	}
}



