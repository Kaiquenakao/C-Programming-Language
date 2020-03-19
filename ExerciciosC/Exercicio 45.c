#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*45. Ler um valor de volume em litros e apresentá-lo convertido em metros cúbicos 𝑚³. A
fórmula de conversão é: 𝑀 = 𝐿/1000 , sendo 𝐿 o volume em litros e 𝑀 o volume em metros
cúbicos.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float lit, metr;
	printf("Digite o valor do volume em litros:");
	scanf("%f", &lit);
	metr = lit / 1000;
	printf("O seu valor em litros convertido para metros:%.2f", metr);
}



