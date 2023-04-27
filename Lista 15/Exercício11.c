#include <stdio.h>
#include <conio.h>

/*11 - Construa um algoritmo para calcular a média de dois valores inteiros positivos, previamente conhecidos.*/

void main(){
	
	int num1, num2;
	float med;
	
	printf("Informe um valor inteiro: ");
	scanf("%i", &num1);
	printf("Informe o segundo valor inteiro: ");
	scanf("%i", &num2);
	med = (num1 + num2) / 2;
	printf("a mehdia dos valores eh: %0.0f", med);
}
