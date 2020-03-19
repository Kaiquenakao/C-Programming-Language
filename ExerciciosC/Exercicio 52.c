#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*52. Ler um valor de área em metros quadrados 𝑚² e apresentá-lo convertido em hectares. A
fórmula de conversão é: 𝐻 = 𝑀 ∗ 0,0001, sendo 𝑀 a área em metros quadrados e 𝐻 a área
em hectares.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float quadrados, hect
	printf("Digite o seu valor em metros quadrados:");
	scanf("%f", &quadrados);
	hect = quadrados * 0.0001;
	printf("o seu valor em quadrados convertido para hectares:%.2f", hect);
	}



