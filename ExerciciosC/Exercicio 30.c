#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*30. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
lê quanto cada apostador investiu, lê o valor do prêmio, e escreve quanto cada um ganharia.
*/
int main(){
	setlocale(LC_ALL,"portuguese");
    float amigo1, amigo2, amigo3, arrecadado;
    float amg1, amg2, amg3;
    printf("\nValor aposta amigo1:");
    scanf("%f", &amigo1);
    printf("\nValor aposta amigo2:");
    scanf("%f", &amigo2);
    printf("\nValor aposta amigo3:");
    scanf("%f", &amigo3);
    arrecadado = amigo1 + amigo2 + amigo3;
    printf("\n\nO valor arrecadado:%.2f", arrecadado);
    amg1 = (amigo1 * 100) / arrecadado;
    amg2 = (amigo2 * 100) / arrecadado;
    amg3 = (amigo3 * 100) / arrecadado;
    printf("\nValor proporcional do amigo1:%.2f%\n", amg1);
    printf("\nValor proporcional do amigo2:%.2f%\n", amg2);
    printf("\nValor proporcional do amigo3:%.2f%\n", amg3);
    printf("\nO amigo1 irá receber:%.2f", amg1 * arrecadado / 100);
    printf("\nO amigo2 irá receber:%.2f", amg2 * arrecadado / 100);
    printf("\nO amigo3 irá receber:%.2f", amg3 * arrecadado / 100);
}




