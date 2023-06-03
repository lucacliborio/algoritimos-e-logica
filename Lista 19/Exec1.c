#include <stdio.h>
#include <conio.h>


/*1.Escreva um algoritmo, que leia um conjunto de 10 fichas, cada uma contendo,
 a altura e o código do sexo de uma pessoa (código = 1 se for masculino e 2 se for feminino), e calcule e imprima:
	- a maior e a menor altura da turma;
	- a média de altura das mulheres;
	- a média de altura da turma.
	- a quantidade de homens.

*/

void main(){
	
	int i, sexo, qtde_masculino = 0, cont_mulher = 0;
	float alt, alt_maior = 0, alt_menor = 0, alt_total = 0, med_alt_total = 0, alt_mulher_total = 0, med_alt_mulher = 0;
	
	for(i=1;i<=10;i++){
		printf("Informe sua altura: ");
		scanf("%f", &alt);
		printf("Informe seu sexo 1-masculino 2-femino: ");
		scanf("%d", &sexo);
		
		if(sexo == 1){//contando os homens
			qtde_masculino++;
		}
		
		if(i == 1){
			alt_maior = alt;
			alt_menor = alt;
		}
		
		if(alt > alt_maior){//atribuindo a maior altura
			alt_maior = alt;
		}
			
		if(alt < alt_menor){//atribuindo a menor altura
			alt_menor = alt;
		}
		
		alt_total += alt;//altura total	
		
		if(sexo == 2){//contador e acumulador mulheres
			cont_mulher ++;
			alt_mulher_total += alt;
		}
		
	}
	
		//media altura geral
		med_alt_total = alt_total/(i-1);
		
		//media altura mulheres
		med_alt_mulher = alt_mulher_total / cont_mulher;
	
	printf("A maior altura eh: %0.2f\n", alt_maior);
	printf("A menor altura eh: %0.2f\n", alt_menor);
	printf("A media da altura das mulheres eh: %0.2f\n", med_alt_mulher);
	printf("A media da altura da turma eh: %0.2f\n", med_alt_total);
	printf("Qtde de pessoa do sexo masculino: %d\n", qtde_masculino);
	
}
