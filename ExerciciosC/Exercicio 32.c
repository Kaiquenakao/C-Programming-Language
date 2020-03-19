#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*32. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A
fórmula de conversão é: 𝐹 = 𝐶 ∗ (
9,0
5,0
) + 32,0, sendo 𝐹 a temperatura em Fahrenheit e 𝐶 a
temperatura em Celsius.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float celsius,f;
	printf("Digite a temperatura em graus celsus:");
	scanf("%f", &celsius);
    f = (celsius * 9 / 5) + 32;
    printf("\nA sua temperatura convertida em Fahrenheit:%.2f", f);

}



