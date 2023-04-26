#include <stdio.h> 
#include <conio.h>

/*2 - Escreva um algoritmo que leia seu nome e após a leitura e exiba o nome lido.*/

void main(){
	char nome[50];	
	printf("Informe seu nome: ");
	scanf("%s", nome);
	printf("O nome informado foi: %s ", nome);
}
