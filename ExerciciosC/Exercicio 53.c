#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*53. Ler um valor de área em hectares e apresentá-lo convertido em metros quadrados 𝑚². A
fórmula de conversão é: 𝑀 = 𝐻 ∗ 10000 , sendo 𝑀 aárea em metros quadrados e 𝐻 a área em
hectares.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float hect, quadrado;
	printf("Digite o seu valor em hectares:");
	scanf("%f", &hect);
	quadrado = hect * 10000;
	printf("O seu valor em hectares convertido em metros quadrado:%.2f", quadrado);
}



