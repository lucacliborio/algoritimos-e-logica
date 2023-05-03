#include <stdio.h>
#include <conio.h>

/*14 - Elabore um algoritmo que informe o maior numero entre três números conhecido pelo usuário. (Considere número iguais)..*/
 
 void main(){
 	
 	float n1, n2, n3, maior; 
 	maior = 0;
 	
 	
 	printf("Informe o primeiro nuhmero: ");
 	scanf("%f", &n1);
 	printf("Informe o segundo nuhmero: ");
 	scanf("%f", &n2);
 	printf("Informe o terceiro nuhmero: ");
 	scanf("%f", &n3);
 	
 	if (n1  > n2 && n1 > n3 || n1 > n2 && n1 >= n3 || n1 >= n2 && n1 > n3){
 		printf("O maior nuhmero eh: %0.2f", n1);
	} 
	else if (n2  > n1 && n2 > n3 || n2 > n1 && n2 >= n3 || n2 >= n1 && n2 > n3){
 		printf("O maior nuhmero eh: %0.2f", n2);
	}
 	else if (n3  > n1 && n3 > n2 || n3 > n1 && n3 >= n2 || n3 >= n1 && n3 > n2){
 		printf("O maior nuhmero eh: %0.2f", n3);	
	}
	else{
		printf("\nOs nuhmero sao iguais.");
	} 
}
