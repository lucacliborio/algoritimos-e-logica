#include <stdio.h>
#include <conio.h>

/*12 - S�o informados dois valores num�ricos correspondentes as notas de um determinado aluno. Deseja-se um algoritmo que permita responder "aprovado"
 se o aluno obtiver m�dia aritm�tica simples igual ou superior a 7,0 caso contr�rio "Reprovado". Mostre tamb�m a m�dia de aprova��o do aluno.*/
 
 void main(){
 	
 	float n1, n2, med;
 	
	printf("Informe sua nota: ");
	scanf("%f", &n1);
	printf("Informe sua segunda nota: ");
	scanf("%f", &n2);
	med = (n1 + n2) / 2;
	
	if (med >= 7){
		printf("Aprovado, mehdia: %0.0f", med);
	}
	else { (med < 7);
		printf("Reprovado, mehdia: %0.0f", med);
	}	
 }
