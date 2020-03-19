#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*20. Escreva um algoritmo para criar um programa de ajuda para vendedores. A partir de um
valor total lido, mostre:
 O total a pagar com desconto de 10%;
 O valor de cada parcela, no parcelamento de 3 x sem juros;
 A comissão do vendedor, no caso de a venda ser a vista (5% sobre o valor com desconto)
 A comissão do vendedor, no caso de a venda ser parcelada (5% sobre o valor total)*/
int main(){
	setlocale(LC_ALL,"portuguese");
	int opcao;
	float total,desconto, d, comissao;
	printf("\n1 - Pagar a vista");
	printf("\n2 - Parcelar o valor em 3x sem juros");
	printf("\nDigite a sua opçao:");
	scanf("%d", &opcao);
    printf("\n\n============PROCESSANDO VALORES============\n\n");
	switch(opcao){
	    case 1:
        printf("Digite o valor total:");
        scanf("%f", &total);
        desconto = total * 10 / 100;
        d = total - desconto;
        printf("\nO seu valor total com 10%% de desconto:%.2f", d);
        comissao = d * 5 / 100;
        printf("\nA comissao do vendedor que eh 5%% sobre o valor com desconto:%.2f", comissao);


        break;
        case 2:
         printf("Digite o valor total:");
         scanf("%f", &total);
         printf("O parcelamento do seu valor total em 3x:%.2f", total / 3);
         comissao = total * 5 / 100;
         printf("\nA comissao do vendedor que eh 5%% sobre o valor total:%.2f", comissao);
         break;
        default:
            printf("Numero incorreto");
            break;

	}

}


