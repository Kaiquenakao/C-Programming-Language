#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*46. Ler um valor de massa em quilogramas e apresentá-lo convertido em libras. A fórmula de
conversão é: 𝐿 = 𝐾/0,45 , sendo 𝐾 a massa em quilogramas e 𝐿 a massa em libras.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float kg,libras;
	printf("Digite o valor da sua massa em quilogramas:");
	scanf("%f", &kg);
	libras = kg / 0.45;
	printf("O seu valor kilo convertido para libras:%.2f", libras);
}


