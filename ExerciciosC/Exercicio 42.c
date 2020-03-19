#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*42. Ler um valor de comprimento em polegadas e apresentá-lo convertido em centímetros. A
fórmula de conversão é: 𝐶 = 𝑃 ∗ 2,54 , sendo 𝐶 o comprimento em centímetros e 𝑃 o
comprimento em polegadas.
*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float pol, cm;
	printf("Digite o seu comprimento em polegadas:");
	scanf("%f", &pol);
	cm = pol * 2.54;
	printf("Polegadas convertido em centimetros:%.2f", cm);
}


