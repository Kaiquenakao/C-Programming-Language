#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1. Fa�a um programa que leia um n�mero inteiro e o imprima, ent�o leia um n�mero real e
tamb�m o imprima.*/


int main(){
    setlocale(LC_ALL,"portuguese");
    int numero;
    float real;
    printf("Digite um n�mero inteiro:");
    scanf("%d", &numero);
    printf("Digite um n�meo real:");
    scanf("%f", &real);
    printf("\nExibindo Valores\n");
    printf("\nN�mero inteiro:%d", numero);
    printf("\nN�mero real:%.2f", real);
    printf("\n\n");

    return;

}
