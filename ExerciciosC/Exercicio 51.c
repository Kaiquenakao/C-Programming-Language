#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*51. Ler um valor de área em acres e apresentá-lo convertido em metros quadrados 𝑚². A
fórmula de conversão é: 𝑀 = 𝐴 ∗ 4048,58 , sendo 𝑀 a área em metros quadrados e 𝐴 a área
em acres.
*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float acres,quadrados;
	printf("Digite o seu valor em acres:");
	scanf("%f", &acres);
	quadrados = acres * 4048.58;
	printf("O seu valor em acres convertido para quadrados:%.2f", quadrados);
}



