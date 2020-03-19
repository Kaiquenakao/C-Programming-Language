#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
/*12. Sejam 𝑎 e 𝑏 os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎
2 + 𝑏
2. Faça um programa que receba os valores de 𝑎 e 𝑏 e encontre o
valor da hipotenusa através da equação. Imprima no final o resultado dessa operação.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float a, b;
	printf("Digite o valor de a:");
	scanf("%f", &a);
	printf("Digite o valor de b:");
	scanf("%f", &b);
    float raiz_quadrada = sqrt(a * a + b * b);
    printf("o valor da hipotenusa:%.2f", raiz_quadrada);

}



