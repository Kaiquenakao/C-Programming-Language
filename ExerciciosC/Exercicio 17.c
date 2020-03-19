#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*17. Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda.*/
int main() {
    float dias, nsal, imposto, sal, novosalario, renda,liquido;
    printf("\nDigite quantos dias o encanador trabalhou:");
    scanf("%f", &dias);
    renda = 0.08;
    sal = 30;
    imposto = 30 * renda;
    novosalario = sal - imposto;
    liquido = dias * novosalario;
    printf("\nA quantidade liquida que vai ser descontado 8%% para imposto de renda:%.2f", liquido);

}

