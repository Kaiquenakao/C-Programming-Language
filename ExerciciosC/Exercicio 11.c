#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*11. Leia o valor do raio de um círculo e calcule a área do círculo correspondente. Imprima o
resultado dessa operação. A área do círculo é 𝜋 ∗ 𝑟𝑎𝑖𝑜², considere 𝜋 = 3,141592 .*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float raio;
	float pi = 3.141592;
	printf("Digite o valor do raio do circulo:");
	scanf("%f", &raio);
    printf("A área do circulo:%.2f", pi * raio * raio);
}



