#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*49. Ler um valor de comprimento em metros e apresentá-lo convertido em jardas. A fórmula
de conversão é: 𝐽 = 𝑀/0,91 , sendo 𝐽 o comprimento em jardas e 𝑀 o comprimento em
metros*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float metros, jardas;
	printf("Digite o seu comprimento em metros:");
	scanf("%f", &metros);
	jardas = metros / 0.91;
	printf("O seu valor em metros convertido para jardas:%.2f", jardas);
}


