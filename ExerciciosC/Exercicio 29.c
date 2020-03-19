#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
/*29. Escreva um programa que leia as coordenadas 𝑥 e 𝑦 de pontos no plano cartesiano e
calcule sua distância da origem (0, 0).*/
int main(){
	setlocale(LC_ALL,"portuguese");
    float x = 0;
    float y = 0;
    float R = 0;
    printf ("Digite a coordenada x \n");
    scanf ("%f", &x);
    printf ("Digite a coordenada y \n");
    scanf ("%f", &y);
    R = sqrt(pow(x,2) + pow(x,2));
    printf("%f", R);
}



