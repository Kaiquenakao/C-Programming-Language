#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*19. Receba o sal�rio-base de um funcion�rio, calcule e imprima o sal�rio a receber, sabendo-se
que esse funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base. Al�m disso, paga 7% de
imposto sobre o sal�rio-base.
*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float salario;
	printf("Digite o seu sal�rio-base:");
	scanf("%f", &salario);
	float gsalario = salario * 5 / 100;
	printf("A gratifica��o do seu sal�rio:%.2f", gsalario + salario);
	float isalario = salario * 7 / 100;
    printf("\nO imposto sobre o seu salario:%.2f", salario - isalario);
    float salariofinal = (salario + gsalario) - isalario;
    printf("\nO seu salario final:%.2f", salariofinal);
}


