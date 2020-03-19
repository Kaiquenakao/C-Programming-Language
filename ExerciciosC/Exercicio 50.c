#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*50. Ler um valor de área em metros quadrados 𝑚2e apresentá-lo convertido em acres. A
fórmula de conversão é: 𝐴 = 𝑀 ∗ 0,000247, sendo 𝑀 a área em metros quadrados e 𝐴 a área
em acres.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float quadrado, acres;
	printf("Digite o seu valor em area quadrados:");
	scanf("%f", &quadrado);
	acres = quadrado * 0.000247;
	printf("O seu valor em quadrado convertido para acres:%.2f", acres);
}



