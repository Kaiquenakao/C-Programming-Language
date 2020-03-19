#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*26. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
minuto e segundo) do termino da mesma.*/
int main(){
	setlocale(LC_ALL,"portuguese");
	printf("=================INCIO=============\n");
	int horas, minutos, segundos;
	int hora, minuto, segundo;
	printf("Digite a horas que começou:");
	scanf("%d", &horas);
	printf("Digite o minutos que começou");
	scanf("%d", &minutos);
	printf("Digite o segundos que começou:");
	scanf("%d", &segundos);
	printf("o seu inicio é Horas:%d-Minutos:%d-Segundos:%d", horas, minutos, segundos);
	printf("\n\n =============== Termino ========================\n\n");
	printf("Digite a duração em segundos:");
	scanf("%d", &segundo);
	hora = segundo / 3600;
	minuto = (segundo - (hora * 3600)) / 60;
	segundo = (segundo - (hora * 3600)) - (minuto * 60);
	printf("Novo Horario= Horas:%d - Minutos:%d - Segundos: %d",hora + horas, minuto + minutos, segundo + segundos);


}




