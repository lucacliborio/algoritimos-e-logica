#include <stdio.h>
#include <conio.h>

/*14 - Elabore um algoritmo que informe o maior numero entre tr�s n�meros conhecido pelo usu�rio. (Considere n�mero iguais)..*/
 
 void main(){
 	
 	float n1, n2, n3, maior; 
 	maior = 0;
 	
 	
 	printf("Informe o primeiro nuhmero: ");
 	scanf("%f", &n1);
 	printf("Informe o segundo nuhmero: ");
 	scanf("%f", &n2);
 	printf("Informe o terceiro nuhmero: ");
 	scanf("%f", &n3);
 	
 	if (n1 > maior){
 		maior = n1;
	 }
		if (n2 > maior){
 		maior = n2;
	 	}
		if (n3 > maior){
		maior = n3;
		}
	else{
		printf("\nOs nuhmeros sao iguais.");
		}
	
	
	printf("\nO maior nuhmero eh: %f", maior);
}
