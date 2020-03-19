#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*18. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês, e imprima o valor a ser pago ao funcionário, adicionando 10% sobre o
valor calculado.
*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float reais, horas, salario;
	printf("Digite o valor da hora de trabalho:");
	scanf("%f", &reais);
	printf("Digite o número de horas trabalhadas no mês:");
	scanf("%f", &horas);
	salario = reais * horas;
	printf("O seu salario:%.2f", salario);
	float nsalario = salario * 10 / 100;
	printf("\nO seu novo salario após adicionar 10%%:%.2f", nsalario + salario);
}



