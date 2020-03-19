#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*19. Receba o salário-base de um funcionário, calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, paga 7% de
imposto sobre o salário-base.
*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float salario;
	printf("Digite o seu salário-base:");
	scanf("%f", &salario);
	float gsalario = salario * 5 / 100;
	printf("A gratificação do seu salário:%.2f", gsalario + salario);
	float isalario = salario * 7 / 100;
    printf("\nO imposto sobre o seu salario:%.2f", salario - isalario);
    float salariofinal = (salario + gsalario) - isalario;
    printf("\nO seu salario final:%.2f", salariofinal);
}


