#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*5. Efetue a leitura de três valores e apresente como resultado a soma dos quadrados dos três
valores lidos.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float a, b, c, somaquadrado;
	printf("Digite o primeiro valor:");
	scanf("%f", &a);
	printf("O quadrado do primeiro valor:%.2f\n", a * a);
    printf("Digite o segundo valor:");
    scanf("%f", &b);
    printf("O quadrado do segundo valor:%.2f\n", b * b);
    printf("Digite o terceiro valor:");
    scanf("%f", &c);
    printf("O quadrado do terceiro valor:%.2f\n", c * c);
    somaquadrado = a * a + b * b + c * c;
    printf("A soma dos quadrado: %.2f + %.2f + %.2f = %.2f", a * a, b * b, c * c, somaquadrado);

}



