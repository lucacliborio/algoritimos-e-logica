#include <stdio.h>
#include <conio.h>

/*18 - Switch - Faça um algoritmo que receba a idade de uma pessoa e classifique-a seguindo a tabela abaixo:

Idade	Classificação
0 a 2 anos	Recém-nascido
3 a 11 anos	Criança
12 a 19 anos	Adolescentes
20 a 55 anos	Adulto
Acima de 55 anos	Idoso

*/

void main(){
	
	float id;
	
	printf("Informe uma idade: ");
	scanf("%f", &id);
	
	if (id >= 0 && id <= 2){
		printf("Recehm-nascido");
	}
	else
		if( id >= 3 && id <= 11){
			printf("Crianca");
		}
		else
			if(id >=12 && id <= 19){
				printf("Adoslescente");
			}
			else
				if(id >= 20 && id <= 55){
					printf("Adulto");
				}
				else
					if(id > 55){
						printf("Idoso");
					}
					
}
