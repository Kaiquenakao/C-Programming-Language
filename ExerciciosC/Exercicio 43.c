#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*43. Ler um valor de comprimento em centímetros e apresentá-lo convertido em polegadas. A
fórmula de conversão é: 𝑃 = 𝐶/2,54 , sendo 𝐶 o comprimento em centímetros e 𝑃 o
comprimento em polegadas.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float cm, pol;
	printf("Digite o seu valor em centimetros:");
	scanf("%f", &cm);
	pol = cm / 2.54;
	printf("O seu valor em convertido em polegas:%.2f", pol);
}



