#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*16. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total:
 O primeiro ganhador receberá 46%;
 O segundo receberá 32%;
 O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	float premio = 780000, primeiro, segundo,terceiro;
	primeiro = premio * 46 / 100;
	printf("O primeiro ganhador vai receber:%.2f", primeiro);
	segundo = premio * 32 / 100;
	printf("\nO segundo ganhador vai receber:%.2f", segundo);
	terceiro = premio * 22 / 100;
	printf("\nO terceiro ganhador vai receber:%.2f", terceiro);
	float soma;

}



