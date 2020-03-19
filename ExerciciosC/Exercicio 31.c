#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*31. Faça um programa para ler as dimensões de um terreno (comprimento 𝑐 e largura 𝑙), bem
como o preço do metro do arame 𝑝, então fornecer como saída o custo para cercar este
mesmo terreno.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float comprimento,altura,area,preco;
	printf("Digite o comprimento do seu terreno:");
	scanf("%f", &comprimento);
	printf("Digite a altura do seu terreno:");
	scanf("%f", &altura);
	printf("Digite o preço por metro do arame:");
	scanf("%f", &preco);
	area = altura * comprimento;
	printf("\nA area do seu terreno:%.2f", area);
	printf("\nVai custar %.2f para cercar o seu terreno de arame", area * preco);
}



