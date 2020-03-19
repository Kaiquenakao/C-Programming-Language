#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*38. Ler uma distância em milhas e apresentá-la convertida em quilômetros. A fórmula de
conversão é: 𝐾 = 1,61 ∗ 𝑀 , sendo 𝐾 a distância em quilômetros e 𝑀 em milhas.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float k,m;
	printf("Digite a sua distancia em milhas:");
	scanf("%f", &m);
	k = 1.61 * m;
	printf("A sua distancia convertida em quilometros:%.2f", k);
}



