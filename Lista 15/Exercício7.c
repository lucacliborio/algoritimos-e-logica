#include <stdio.h>
#include <conio.h>

/*7 - Escreva um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, ao final exiba a idade que essa pessoa tem.*/

void main(){
	
	int idade, atual, sub;
	
	printf("Informe o ano atual: ");
	scanf("%i", &atual);
	printf("Informe seu ano de nascimento: ");
	scanf("%i", &idade);
	sub = atual - idade;
	printf("Sua idade eh: %i", sub);
	
	
}
