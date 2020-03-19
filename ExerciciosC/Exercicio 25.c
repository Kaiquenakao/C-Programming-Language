#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*25. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos*/
int main(){
	setlocale(LC_ALL,"portuguese");
	int segundos,minutos,horas;
	printf("Digite o segundos:");
	scanf("%d", &segundos);
	printf("\n===================== EXIBINDO VALORES ==================\n");
    horas = segundos / 3600;
    minutos = (segundos - (horas * 3600)) / 60;
    segundos = (segundos - (horas * 3600)) - (minutos * 60);
	printf("Horas:%d-Minutos:%d-Segundos:%d", horas, minutos, segundos);



}

