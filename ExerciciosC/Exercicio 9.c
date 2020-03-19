#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*9. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
dobro.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	int numero,triplo,dobro,soma;
	printf("Digite um número inteiro:");
	scanf("%d", &numero);
	triplo = numero * 3 + 1;
	dobro = numero * 2 - 1;
	printf("O sucessor do número digitado:%d\n", triplo);
	printf("O antecessor do dobro do número digitado:%d\n", dobro);
	soma = triplo + dobro;
	printf("A soma do triplo do sucessor com o antecessor do dobro digitados:%d", soma);
}

