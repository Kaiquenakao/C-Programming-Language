#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*7. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em
dólares.*/
int main(){
	setlocale(LC_ALL,"portuguese");

	float cotacao;
	float real;
	printf("Digite o valor em real:");
	scanf("%f",&real);
	printf("Digite a cotação do dolar:");
	scanf("%f", &cotacao);
    printf("Real para dolar:$%.2f", real / cotacao);
}


