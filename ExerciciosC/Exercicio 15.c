#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*15. Receba o salário de um funcionário, calcule e imprima o valor do novo salário, sabendo que
ele recebeu um aumento de 25%.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float salario;
	printf("O salário do funcionário:");
	scanf("%f", &salario);
	printf("Salario:%.2f", salario);
	float aumento = 25 * salario / 100;
	printf("\nNovo salário com 25%% de aumento:%.2f", salario + aumento);
}


