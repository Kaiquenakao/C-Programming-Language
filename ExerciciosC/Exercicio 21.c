#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*21. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo
a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo,
sem se preocupar com a altura do usuário.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	float escada, altura;
	int objetivo;
	printf("Digite a altura do degrau de um escada:");
	scanf("%f", &escada);
	printf("Digite a altura que o usuario deseja alcançar subindo a escada:");
	scanf("%f", &altura);
	objetivo = altura / escada;
	printf("Degraus que o usario deverá subir para atinger seu objetivo:%d", objetivo);
}


