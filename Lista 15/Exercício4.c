#include <stdio.h> 
#include <conio.h>

/*4 - Escreva um algoritmo que leia 2 números, após a leitura somar e exibir o resultado.*/

void main(){
	
	float num1,num2, soma;
	
	printf("Informe um nuhmero: ");	
	scanf("%f", &num1);
	printf("Informe outro nuhmero: ");
	scanf("%f", &num2);
	soma = num1+num2;
	printf("O valor da soma eh: %0.2f", soma);
	
	
}
