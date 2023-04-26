#include <stdio.h> 
#include <conio.h>

/*3 - Escreva um algoritmo que leia seu nome e em uma segunda variável leia seu sobrenome
 e ao final exiba seu nome concatenado com seu sobrenome.*/

void main(){
	char nome[50], sobrenome[50];	
	printf("Informe seu nome: ");
	scanf("%s", nome);
	printf("Informe seu sobrenome: ");
	scanf("%s", sobrenome);
	printf("O nome informado foi: %s %s ", nome, sobrenome);
}
