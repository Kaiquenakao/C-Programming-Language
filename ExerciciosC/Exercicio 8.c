#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*8. Leia um n�mero inteiro e imprima o seu antecessor e o seu sucessor*/
int main(){
	setlocale(LC_ALL,"portuguese");
	int numero;
	printf("Digite o seu n�mero:");
	scanf("%d", &numero);
	printf("O n�mero sucessor que voc� digitou:%d\n", numero + 1);
	printf("O numero antecessor que voc� digitou:%d\n", numero - 1);
}



