#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*22. Fa�a um programa para converter uma letra mai�scula em letra min�scula. Use a tabela
ASCII.*/
main()
{
char letra;
printf("================Tabela Conversor====================");
printf("\nDigite uma string com letras maiuscula:");
scanf("%c", &letra);
letra = toupper(letra);
printf("\n================Convertendo para letras mai�culas================");
printf("\n%c", letra);
}
