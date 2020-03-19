#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*34. Ler uma temperatura em graus Kelvin e apresentá-la convertida em graus Celsius. A
fórmula de conversão é: 𝐶 = 𝐾 − 273,15, sendo 𝐶 a temperatura em Celsius e 𝐾 a
temperatura em Kelvin.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float kelvin,celsius;
	printf("Digite a sua temperatura em graus Kelvin:");
	scanf("%f", &kelvin);
	celsius = kelvin - 273.15;
	printf("\n\nA sua temperatura convertida em celsius:%.2f", celsius);
}


