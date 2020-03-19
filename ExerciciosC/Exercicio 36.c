#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*36. Ler uma velocidade em km/h (quilômetros por hora) e apresentá-la convertida em 𝑚/𝑠
(metros por segundo). A fórmula de conversão é: 𝑀 = 𝑘/3,6, sendo 𝐾 a velocidade em 𝑘𝑚/ℎ
e 𝑀 em m/s.
*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float vel,metro;
	printf("Digite a sua velocidade em km/h:");
	scanf("%f", &vel);
	metro = vel / 3.6;
	printf("A sua velocidade convertida em m/s:%.2f", metro);
}



