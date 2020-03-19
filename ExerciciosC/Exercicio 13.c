#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*13. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de
um cilindro circular é calculado por meio da seguinte fórmula: V = 𝜋 ∗ 𝑟𝑎𝑖𝑜
2
∗ 𝑎𝑙𝑡𝑢𝑟𝑎, onde
𝜋 = 3,141592 */
int main(){
	setlocale(LC_ALL,"portuguese");
	float altura, raio;
	float pi = 3.141592;
	printf("Digite a altura do cilindro:");
	scanf("%f", &altura);
	printf("Digite o raio do cilindro:");
	scanf("%f", &raio);
	float v = pi * raio * raio *altura;
	printf("O volume do cilindro:%.2f", v);
}



