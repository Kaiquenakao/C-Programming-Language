#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*3. Efetue a leitura de um número real e imprima o resultado do quadrado desse número.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float real,quadrado;
	printf("Digite um número real:");
	scanf("%f", &real);
    printf("O resultado do quadrado:%.2f", real * real);
}

