#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*28. Fa�a um algoritmo que calcule a m�dia ponderada das notas de 3 provas. A primeira e a
segunda prova t�m peso 1 e a terceira tem peso 2. Antes de o usu�rio entrar com as notas do
aluno ele deve entrar com o n�mero de matricula do aluno. Ao final, mostrar a matricula do
aluno juntamente com a sua m�dia e indicar se o aluno foi aprovado ou reprovado. A nota
para aprova��o deve ser igual ou superior a 60 pontos.
*/
int main(){
	setlocale(LC_ALL,"portuguese");
	int matricula;
	float nota1, nota2, nota3, mediapo;
	printf("Digite o n�mero da matricula do aluno:");
	scanf("%d", &matricula);
	printf("Digite a sua primeira nota de 0 a 100:");
	scanf("%f", &nota1);
	printf("Digite a sua segunda nota de 0 a 100:");
	scanf("%f", &nota2);
	printf("Digite a sua terceira nota de 0 a 100:");
	scanf("%f", &nota3);
	mediapo = (nota1 * 1) + (nota2 * 1) + (nota3 * 2) / 4;
	if(mediapo >= 60){
        printf("Matricula - %d:Voc� foi aprovado", matricula);
	}else{
        printf("Matricula - %d:Voc� foi reprovado", matricula);
	}

}



