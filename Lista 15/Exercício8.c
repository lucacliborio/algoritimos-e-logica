#include <stdio.h>
#include <conio.h>

/*8 - Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.*/

void main(){
	
	float nota1, nota2, nota3, med;
	
	printf("Informe sua primeira nota: ");
	scanf("%f", &nota1);
	printf("Informe sua segunda nota: ");
	scanf("%f", &nota2);
	printf("Informe sua terceira nota: ");
	scanf("%f", &nota3);
	med = (nota1 + nota2 + nota3) /3;
	printf("Sua mehdia eh: %0.2f", med);
}
