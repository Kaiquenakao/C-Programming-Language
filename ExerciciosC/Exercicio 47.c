#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*47. Ler um valor de massa em libras e apresentá-lo convertido em quilogramas. A fórmula de
conversão é: 𝐾 = 𝐿 ∗ 0,45 , sendo 𝐾 a massa em quilogramas e 𝐿 a massa em libras.
*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float kilo, libras;
	printf("Digite o seu valor em libras:");
	scanf("%f", &libras);
	kilo = libras * 0.45;
	printf("o seu valor em libras convertido para kilo:%.2f", kilo);
}



