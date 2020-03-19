#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*42. Ler um ângulo em radianos e apresentá-lo convertido em graus. A fórmula de conversão é:
𝐺 = 𝑅 ∗ 180/𝜋 , sendo 𝐺 o ângulo em graus e 𝑅 em radianos e 𝜋 = 3,141592.
*/
int main(){
	setlocale(LC_ALL,"portuguese");
    float rad, grau, pi;
    printf("Digite o valor do seu angulo em radianos:");
    scanf("%f", &rad);
    pi = 3.141592;
    grau = rad * 180 / pi;
    printf("O seu valor convertido em graus:%.2f", grau);

}


