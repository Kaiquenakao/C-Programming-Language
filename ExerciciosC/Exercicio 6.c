#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*6. Leia quatro notas, calcule a m�dia aritm�tica e imprima o resultado.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	int i;
	float nota, soma = 0;
	printf("Digite 4 notas para calcular a m�dia aritm�tica\n");
	for(i = 1; i <= 4; i++){
        printf("Nota %d:", i);
        scanf("%f", &nota);
        soma = soma + nota;
	}
	printf("m�dia aritm�tica:%.2f", soma / 4);
}


