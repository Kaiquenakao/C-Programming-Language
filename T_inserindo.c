#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int a;
    float b;
    char d;
    /*
        Nesse programa eu vou utilizar apenas quatro variav�is para inserir os valores sendo elas (a) (b) (c) (d)
        muito importante inserir a biblioteca locale para mudar o idioma do codeblocks, assim facilitando na hora da leitura
        onde as aceitua��e s�o legiv�is. obrigat�rio revisar a aula T_Variaveis.c para compreender melhor esse programa
    */
    printf("Digite um valor caracter c:"); //printf para imprimir na tela a mensagem que est� contida entre as aspas duplas
    scanf("%c", &d); //scanf para receber do usu�rio o valor que eu quero para a vari�vel (d) e %c, um detalhe � que aqui digitamos APENAS um caracter
    printf("Digite um valor inteiro para a:"); //printf para imprimir na tela a mensagem que est� contida entre as aspas duplas
    scanf("%d", &a); //scanf para receber do usu�rio o valor que eu quero para a vari�vel (a) e %d, pois a variav�l declarada � inteira
    printf("Digite um valor float para b:"); //printf para imprimir na tela a mensagem que est� contida entre as aspas duplas
    scanf("%f", &b); //scanf para receber do usu�rio o valor que eu quero para a vari�vel (b) e %f, pois a variav�l declarada � um float ou seja um n�mero real
    printf("\n=============== Exibindo Valores ==========================\n");  //printf para imprimir na tela a mensagem que est� contida entre as aspas duplas
    printf("a:%d\n", a); //Exibir o valor da vari�vel a
    printf("b:%.2f\n", b); //Exibir o valor da vari�vel b,utilizei %.2f para pular duas casas decimais
    printf("d:%c\n", d); //Exibir o valor da vari�vel c

}
