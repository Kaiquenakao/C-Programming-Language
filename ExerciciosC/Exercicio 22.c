#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*22. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII.*/
main()
{
char letra;
printf("================Tabela Conversor====================");
printf("\nDigite uma string com letras maiuscula:");
scanf("%c", &letra);
letra = toupper(letra);
printf("\n================Convertendo para letras maiúculas================");
printf("\n%c", letra);
}
