#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*8. Leia um número inteiro e imprima o seu antecessor e o seu sucessor*/
int main(){
	setlocale(LC_ALL,"portuguese");
	int numero;
	printf("Digite o seu número:");
	scanf("%d", &numero);
	printf("O número sucessor que você digitou:%d\n", numero + 1);
	printf("O numero antecessor que você digitou:%d\n", numero - 1);
}



