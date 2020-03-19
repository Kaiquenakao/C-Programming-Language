#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*48. Ler um valor de comprimento em jardas e apresentá-lo convertido em metros. A fórmula
de conversão é: 𝑀 = 0,91 ∗ 𝐽 , sendo 𝐽 o comprimento em jardas e 𝑀 o comprimento em
metros.
*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float jardas, metros;
	printf("Digite o seu comprimento em jardas:");
	scanf("%f", &jardas);
	metros = jardas * 0.91;
	printf("O seu valor convertido em jardas:%.2f", metros);
}



