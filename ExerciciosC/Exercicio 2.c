#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*2. Pe�a ao usu�rio para digitar tr�s valores inteiros e imprima a soma deles.*/
int main(){
    int a, b, c, soma;
	setlocale(LC_ALL,"portuguese");
    printf("Digite o seu primeiro n�mero:");
    scanf("%d", &a);
    printf("Digite o seu segundo n�mero:");
    scanf("%d", &b);
    printf("Digite o seu terceiro n�mero:");
    scanf("%d", &c);
    soma = a + b + c;
    printf("O resultado da soma dos tr�s valores: %d", soma);
}
