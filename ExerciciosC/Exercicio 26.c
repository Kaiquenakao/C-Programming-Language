#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*26. Fa�a um programa para leia o hor�rio (hora, minuto e segundo) de in�cio e a dura��o, em
segundos, de uma experi�ncia biol�gica. O programa deve resultar com o novo hor�rio (hora,
minuto e segundo) do termino da mesma.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	printf("=================INCIO=============\n");
	int horas, minutos, segundos;
	int hora, minuto, segundo;
	printf("Digite a horas que come�ou:");
	scanf("%d", &horas);
	printf("Digite o minutos que come�ou");
	scanf("%d", &minutos);
	printf("Digite o segundos que come�ou:");
	scanf("%d", &segundos);
	printf("o seu inicio � Horas:%d-Minutos:%d-Segundos:%d", horas, minutos, segundos);
	printf("\n\n =============== Termino ========================\n\n");
	printf("Digite a dura��o em segundos:");
	scanf("%d", &segundo);
	hora = segundo / 3600;
	minuto = (segundo - (hora * 3600)) / 60;
	segundo = (segundo - (hora * 3600)) - (minuto * 60);
	printf("Novo Horario= Horas:%d - Minutos:%d - Segundos: %d",hora + horas, minuto + minutos, segundo + segundos);


}




