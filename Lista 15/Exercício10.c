#include <stdio.h>
#include <conio.h>

/*10 - Elabore um algoritmo que informe o maior número entre dois números conhecido pelo usuário.*/

void main(){
	
	float num1, num2;
	
	printf("Informe um nuhmero: ");
	scanf("%f", &num1);
	printf("Informe outro nuhmero: ");
	scanf("%f", &num2);
	if (num1 > num2){
		printf("O maior nuhmero eh: %0.0f", num1);
	} 
	else{
		if (num1 == num2){
		printf("Os nuhmero sao iguais.");
		}
		else{
			printf("O maior nuhmeros eh: %0.0f", num2);
		} 
	}
}
