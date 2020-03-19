#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1. Faça um programa que leia um número inteiro e o imprima, então leia um número real e
também o imprima.*/


int main(){
    setlocale(LC_ALL,"portuguese");
    int numero;
    float real;
    printf("Digite um número inteiro:");
    scanf("%d", &numero);
    printf("Digite um númeo real:");
    scanf("%f", &real);
    printf("\nExibindo Valores\n");
    printf("\nNúmero inteiro:%d", numero);
    printf("\nNúmero real:%.2f", real);
    printf("\n\n");

    return;

}
