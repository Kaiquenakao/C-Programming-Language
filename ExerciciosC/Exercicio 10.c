#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*10. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float lado;
	float quadrado;
	printf("Digite um tamanho do quadrado:");
	scanf("%f", &lado);
	quadrado = lado * lado;
	printf("A area do quadrado:%.2f", quadrado);
}



