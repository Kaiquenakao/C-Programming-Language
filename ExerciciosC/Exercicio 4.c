#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*4. Leia um número real e imprima a quinta parte deste número.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float real,quinta;
	printf("Digite um número real:");
	scanf("%f", &real);
	quinta = real * 1/5;
	printf("A quinta parte do seu número real: %.2f", quinta);
}


