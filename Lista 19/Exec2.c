#include <stdio.h>
#include <conio.h>


/*2.	Escreva um algoritmo que:
 - leia 7 fichas, onde cada ficha contém o número de matrícula e a nota de cada aluno de um determinado curso;
 - determine e imprima as duas maiores notas, juntamente com o número de matrícula do aluno que obteve cada uma delas;
 - Suponha que não exista dois ou mais alunos com a mesma nota.
*/

void main(){
	
	int i = 0;
	float nota = 0, notamaior1 = 0, notamaior2 = 0 , matricula = 0, matriculan1 = 0, matriculan2 = 0;
	
	while(i < 7){
		printf("Informe sua nota: ");
		scanf("%f", &nota);
		printf("Informe seu nuhmero de mahtricula: ");
		scanf("%f", &matricula);
		
		if(nota >= notamaior1){
			notamaior2 = notamaior1;
			notamaior1 = nota;
			matriculan1 = matricula;
		}
		else
			if(nota >= notamaior2){
				notamaior2 = nota;
				matriculan2 = matricula;
			}
		i++;	
	}
	
	printf("A maior nota foi: %0.1f. Mahtricula: %0.0f\n", notamaior1, matriculan1);
	printf("A segunda maior nota foi: %0.1f. Mahtricula: %0.0f\n", notamaior2, matriculan2);
}
