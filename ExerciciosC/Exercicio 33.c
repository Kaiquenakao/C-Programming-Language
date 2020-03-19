#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*33. Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A
fórmula de conversão é: 𝐶 = 5,0 ∗ (𝐹 − 32,0)/9,0, sendo 𝐶 a temperatura em Celsius e 𝐹 a
temperatura em Fahrenheit.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float fah, cel;
	printf("Digite a sua temperatura em graus Fahrenheit:");
	scanf("%f", &fah);
	cel = 5 * (fah - 32) / 9;
	printf("A sua temperatura convertida em celsius:%.2f", cel);
}



