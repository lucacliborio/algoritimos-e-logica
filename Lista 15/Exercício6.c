#include <stdio.h>
#include <conio.h>

/*6 - Escreva um algoritmo que leia 3 números e ao final subtraia o primeiro do segundo e divida o resultado pelo terceiro.*/

void main(){
	
	float num1, num2, num3, sub, div;
	
	printf("Informe um nuhmero: ");
	scanf("%f", &num1);
	printf("Informe o segundo nuhmero: ");
	scanf("%f", &num2);
	printf("Informe o terceiro nuhmero: ");
	scanf("%f", &num3);
	sub = num2 - num1;
	div = sub / num3;
	printf("O valor final eh: %0.2f", div);
}
