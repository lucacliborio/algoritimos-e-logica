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
	"	A porcentagem de alunos reprovados por faltas. ok
*/

void main(){
	
	float i = 1, n1 = 0, n2 = 0, n3 = 0, med = 0 , reprovadosfalta = 0 , totaln = 0, medtotal = 0 ;
	float  nmaior = 0, nmenor = 99999, somamed = 0, reprovados = 0, reprov1 = 0, reprov2 = 0, matricula = 0, aula = 0;
	
	do{
		printf("Informe a sua mahtricular: ");
		scanf("%d", &matricula);
		printf("Informe a sua primeira nota: ");
		scanf("%f", &n1);
		printf("Informe a sua segunda nota: ");
		scanf("%f", &n2);
		printf("Informe a sua terceira nota: ");
		scanf("%f", &n3);
		
		med = (n1+n2+n3) /3;//conta media dos alunos
		somamed = (med + somamed);//media total
		
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
				reprov1++;
			}
		}
		else{// reprovados por nota
			printf("Reprovado!!!\n");
			printf("Sua mehdia foi: %0.1f\n", med);
			reprov2++;
		}
		
		i++;
		
		//atribuindo a maior nota
		if(n1 > nmaior){
			nmaior = n1;
		}
		
		if(n2 > nmaior){
			nmaior = n2;
		}
	
		if(n3 > nmaior){
			nmaior = n3;
		}
		
		//atribuindo a menor nota
		if(nmenor > n1){
			nmenor = n1;
		}
		
		if(nmenor > n2){
			nmenor = n2;
		}
	
		if(nmenor > n3){
			nmenor = n3;
		}
		
	}while(i <=2);
	
	//media da turma
	medtotal = somamed/(i - 1);
	//conta total rerovados
	reprovados = reprov1 + reprov2;
	//conta % reprovados por falta
	reprovadosfalta =  (reprov1/reprovados)*100;
	
	printf("A maior nota foi: %0.1f\n", nmaior);
	printf("A menor nota foi: %0.1f\n", nmenor);
	printf("Media da turma: %0.1f\n", medtotal);
	printf("Alunos reprovados: %0.0f\n", reprovados);
	printf("Alunos reprovados por falta: %0.1f%%", reprovadosfalta);
}
