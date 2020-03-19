#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*44. Ler um valor de volume em metros cúbicos 𝑚³ e apresentá-lo convertido em litros. A
fórmula de conversão é: 𝐿 = 1000 ∗ 𝑀, sendo 𝐿 o volume em litros e 𝑀 o volume em metros
cúbicos.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float vol, li;
	printf("Digite o seu valor em volume em metros:");
	scanf("%f", &vol);
	li = vol * 1000;
	printf("Metros para litros:%.2f", li);
}



