#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*40. Ler um ângulo em graus e apresentá-lo convertido em radianos. A fórmula de conversão é:
𝑅 = 𝐺 ∗ 𝜋/180 , sendo 𝐺 o ângulo em graus e R em radianos e 𝜋 = 3,141592.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float rad,graus;
	printf("Digite o seu angulo em graus:");
	scanf("%f", &graus);
	float pi = 3.141592;
	rad = graus * pi / 180;
	printf("O seu angulo em graus convertido para radiano: %.2f", rad);
}



