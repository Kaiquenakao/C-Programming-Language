#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*15. Receba o sal�rio de um funcion�rio, calcule e imprima o valor do novo sal�rio, sabendo que
ele recebeu um aumento de 25%.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float salario;
	printf("O sal�rio do funcion�rio:");
	scanf("%f", &salario);
	printf("Salario:%.2f", salario);
	float aumento = 25 * salario / 100;
	printf("\nNovo sal�rio com 25%% de aumento:%.2f", salario + aumento);
}


