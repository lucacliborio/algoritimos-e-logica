#include <stdio.h>
#include <conio.h>

/*17 - Switch - Fa�a um algoritmo que receba o pre�o e o c�digo de origem de um produto e exiba a
 proced�ncia de acordo com a tabela abaixo:
C�digo de Origem	Proced�ncia
1			Sul
2			Norte
3			Leste
4			Oeste
5 ou 6			Nordeste
7, 8 ou 9		Sudeste
10 at� 20		Centro-Oeste
21 at� 30		Noroeste
Outros c�digo		Inv�lido
*/

void main(){
	
	float codigo, valor;
	
	printf("Informe o codigo do produto: ");
	scanf("%f", &codigo);
	printf("Informe o valor do produto: ");
	scanf("%f", &valor);
	
	if (codigo == 1){
		printf("Sul");
	}
	else
		if(codigo == 2){
			printf("Norte");
		}
		else
			if(codigo == 3){
				printf("Leste");
			}
			else
				if(codigo == 4){
					printf("Oeste");
				}
				else
					if(codigo == 5 || codigo == 6){
						printf("Nordeste");
					}
					else
						if(codigo == 7 || codigo== 8 || codigo == 9){
							printf("Sudeste");
						}
						else
							if (codigo >=10 && codigo <=20){
								printf("Centro-Oeste");
							}
							else
								if(codigo >= 21 && codigo <=30){
									printf("Noroeste");
								}
								else{
									printf("Cohdigo invahlido.");
								}
						
	
}
