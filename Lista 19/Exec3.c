#include <stdio.h>
#include <conio.h>


/*3.	O sistema de avalia��o de uma determinada disciplina obedece aos seguintes crit�rios:
	"	Durante o semestre s�o dadas tr�s notas;
	"	A nota final � obtida pela m�dia aritm�tica das notas dadas durante o curso;
	"	� considerando aprovado o aluno que obtiver a nota final superior ou igual a 6,0 e que tiver comparecido a um m�nimo de 40 aulas.
		Fazer um algoritmo que:

	a)	Leia um conjunto de dados contendo o n�mero de matr�cula, as tr�s notas e a frequ�ncia de 10 alunos;

	b)	Calcule e exiba:
	"	A nota final de cada aluno; ok
	"	A maior e menor nota da turma; --
	"	A nota m�dia da turma; ok
	"	O total de alunos reprovados; ok
	"	A porcentagem de alunos reprovados por faltas. --
*/

void main(){
	
	int i = 1, matricula = 0, aula = 0, reprovados = 0, reprov1 = 0, reprov2 = 0;
	float n1 = 0, n2 = 0, n3 = 0, med = 0, reprovadosfalta = 0, totaln = 0, medtotal = 0, nmaior;
	
	do{
		printf("Informe a sua mahtricular: ");
		scanf("%d", &matricula);
		printf("Informe a sua primeira nota: ");
		scanf("%f", &n1);
		printf("Informe a sua segunda nota: ");
		scanf("%f", &n2);
		printf("Informe a sua terceira nota: ");
		scanf("%f", &n3);
		
		totaln = n1+n2+n3;//totalnotas
		medtotal = (totaln + medtotal)/i;//media total
		med = (n1+n2+n3) /3;//conta media
		
		if(med >= 6){//aprovados
			printf("Informe em quantas aulas voce compareceu: ");
			scanf("%d", &aula);
			if(aula >= 40){
				printf("Aprovado!!!\n");
				printf("Sua mehdia foi: %0.1f\n", med);
			}
			else{//reprovados por falta
				printf("Reprovado por falta!!!\n");
				printf("Sua mehdia foi: %0.1f\n", med);
				reprov1 ++;
			}
		}
		else{// reprovados por nota
			printf("Reprovado!!!\n");
			printf("Sua mehdia foi: %0.1f\n", med);
			reprov2 ++;
		}
		
		i++;
		
		if(n1 > nmaior){
			nmaior = n1;
		}
		else
			if(n2 > nmaior){
				nmaior = n2;
			}
			else
				if(n3 > nmaior){
					nmaior = n3;
				}
		
	}while(i <=1);
	
	//conta total rerovados
	reprovados = reprov1 + reprov2;
	//conta % reprovados por falta
	reprovadosfalta =  (reprov1/reprovados)*100;
	
	printf("A maior nota foi: %0.1f\n", nmaior);
	printf("Media da turma: %0.1f\n", medtotal);
	printf("Alunos reprovados: %d\n", reprovados);
	printf("Alunos reprovados por falta: %0.1f%%", reprovadosfalta);
}
