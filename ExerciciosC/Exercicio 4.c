#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*4. Leia um n�mero real e imprima a quinta parte deste n�mero.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float real,quinta;
	printf("Digite um n�mero real:");
	scanf("%f", &real);
	quinta = real * 1/5;
	printf("A quinta parte do seu n�mero real: %.2f", quinta);
}


