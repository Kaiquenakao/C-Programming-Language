#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*39. Ler uma distância em quilômetros e apresentá-la convertida em milhas. A fórmula de
conversão é: 𝑀 = 𝐾/1,61 , sendo 𝐾 a distância em quilômetros e 𝑀 em milhas.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float k,m;
	printf("Digite a sua distancia em quilometros:");
	scanf("%f", &k);
	m = k / 1.61;
	printf("A sua distancia convertida em milha:%.2f", m);

}



