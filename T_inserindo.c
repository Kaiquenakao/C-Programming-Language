#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int a;
    float b;
    char d;
    /*
        Nesse programa eu vou utilizar apenas quatro variavéis para inserir os valores sendo elas (a) (b) (c) (d)
        muito importante inserir a biblioteca locale para mudar o idioma do codeblocks, assim facilitando na hora da leitura
        onde as aceituaçõe são legivéis. obrigatório revisar a aula T_Variaveis.c para compreender melhor esse programa
    */
    printf("Digite um valor caracter c:"); //printf para imprimir na tela a mensagem que está contida entre as aspas duplas
    scanf("%c", &d); //scanf para receber do usuário o valor que eu quero para a variável (d) e %c, um detalhe é que aqui digitamos APENAS um caracter
    printf("Digite um valor inteiro para a:"); //printf para imprimir na tela a mensagem que está contida entre as aspas duplas
    scanf("%d", &a); //scanf para receber do usuário o valor que eu quero para a variável (a) e %d, pois a variavél declarada é inteira
    printf("Digite um valor float para b:"); //printf para imprimir na tela a mensagem que está contida entre as aspas duplas
    scanf("%f", &b); //scanf para receber do usuário o valor que eu quero para a variável (b) e %f, pois a variavél declarada é um float ou seja um número real
    printf("\n=============== Exibindo Valores ==========================\n");  //printf para imprimir na tela a mensagem que está contida entre as aspas duplas
    printf("a:%d\n", a); //Exibir o valor da variável a
    printf("b:%.2f\n", b); //Exibir o valor da variável b,utilizei %.2f para pular duas casas decimais
    printf("d:%c\n", d); //Exibir o valor da variável c

}
