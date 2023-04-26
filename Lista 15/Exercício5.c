#include <stdio.h> 
#include <conio.h>

/*5 - Escreva um algoritmo que leia 4 números, após a leitura multiplique todos e exibir o resultado.*/

void main(){
	
	float num1, num2, num3, num4, mult;	
	
	printf("Informe um nuhmero: "); 
	scanf("%f", &num1);
	printf("Informe o segundo nuhmero: ");
	scanf("%f", &num2);
	printf("Informe o terceiro nuhmero: ");
	scanf("%f", &num3);
	printf("Informe o quarto nuhmero: ");
	scanf("%f", &num4);
	mult = num1 * num2 * num3 * num4;
	printf("O valor dos nuhmeros multiplicados eh: %0.2f", mult);
}
