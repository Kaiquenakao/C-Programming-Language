#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*35. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Kelvin. A
fórmula de conversão é: 𝐾 = 𝐶 + 273,15, sendo 𝐶 a temperatura em Celsius e 𝐾
atemperatura em Kelvin.
*/
int main(){
	setlocale(LC_ALL,"portuguese");
    float celsius,kelvin;
    printf("Digite a sua temperatura em Celsius:");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("\n\nA sua temperatura convertida em Kelvin:%f", kelvin);
}



