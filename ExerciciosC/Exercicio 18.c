#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*18. Fa�a um programa que leia o valor da hora de trabalho (em reais) e n�mero de horas
trabalhadas no m�s, e imprima o valor a ser pago ao funcion�rio, adicionando 10% sobre o
valor calculado.
*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float reais, horas, salario;
	printf("Digite o valor da hora de trabalho:");
	scanf("%f", &reais);
	printf("Digite o n�mero de horas trabalhadas no m�s:");
	scanf("%f", &horas);
	salario = reais * horas;
	printf("O seu salario:%.2f", salario);
	float nsalario = salario * 10 / 100;
	printf("\nO seu novo salario ap�s adicionar 10%%:%.2f", nsalario + salario);
}



