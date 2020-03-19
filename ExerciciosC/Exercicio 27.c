#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*27. Implemente um programa em C que calcule o ano de nascimento de uma pessoa a partir
de sua idade e do ano atual.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	int idade,ano;
	printf("\n\n=============Programa para calcular o ano de dascimento da pessoa=============================\n\n");
	printf("Digite a sua idade:");
	scanf("%d", &idade);
	printf("Digite o ano atual:");
    scanf("%d", &ano);
    printf("A sua data de nascimento:%d", ano - idade);


}



