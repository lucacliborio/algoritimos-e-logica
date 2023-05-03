#include <stdio.h>
#include <conio.h>

/*17 - Switch - Faça um algoritmo que receba o preço e o código de origem de um produto e exiba a
 procedência de acordo com a tabela abaixo:
Código de Origem	Procedência
1			Sul
2			Norte
3			Leste
4			Oeste
5 ou 6			Nordeste
7, 8 ou 9		Sudeste
10 até 20		Centro-Oeste
21 até 30		Noroeste
Outros código		Inválido
*/

void main(){
	
	float codigo, valor;
	
	printf("Informe o codigo do produto: ");
	scanf("%f", &codigo);
	printf("Informe o valor do produto: ");
	scanf("%f", &valor);
	
	if (codigo == 1){
		printf("SUL");
	}
	else
		if(codigo == 2){
			printf("NORTE");
		}
		else
			if(codigo == 3){
				printf("LESTE");
			}
			else
				if(codigo == 4){
					printf("OESTE");
				}
				else
					if(codigo == 5){
						
					}
	
}
