#include <stdio.h>
int main(){
    /*
    Existe inúmeros tipos de variáveis, sendo elas:
    float -> número real, com casas decimais
    int -> número inteiro, sem casas decimais
    char -> para caracteres
    */
    float a = 12.2; //Um variável onde eu estou atribuindo um valor (float)
    int b = 12; //Um variável onde eu estou atribuindo um valor (int)
    char c = 'x'; //Um variável onde eu estou atribuindo um valor (c)
    /*
        O comando printf ele vai imprimir na tela, e o \n para pular uma linha
    */
    printf("%f\n", a); //Aqui nesse printf eu coloquei %f pois ele representa o (float) e pedi para exibir o valor de (a) e duas casas decimais
    printf("%d\n", b); //Aqui nesse printf eu coloquei %d pois ele representa o (int) e pedi para exibir o valor de (b)
    printf("%c\n", c); //Aqui nesse printf eu coloquei %c pois ele representa o (char) e pedi para exibir o valor de (c)

    /*
        variável porque ela pode mudar constantemente ao decorrer do programa
    */
}
