#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*14. Faça um programa que possa entrar com o valor de um produto e imprima o valor tendo
em vista que o desconto foi de 12%
*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float produto;
	printf("Digite o valor do produto:");
	scanf("%f", &produto);
	printf("O preço do seu produto:%f", produto);
	float desconto = 12 * produto / 100;
	printf("\nO preço do seu produto com 12%% de desconto:%.2f", produto - desconto);
}



