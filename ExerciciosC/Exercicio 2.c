#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*2. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.*/
int main(){
    int a, b, c, soma;
	setlocale(LC_ALL,"portuguese");
    printf("Digite o seu primeiro número:");
    scanf("%d", &a);
    printf("Digite o seu segundo número:");
    scanf("%d", &b);
    printf("Digite o seu terceiro número:");
    scanf("%d", &c);
    soma = a + b + c;
    printf("O resultado da soma dos três valores: %d", soma);
}
