#include <stdio.h>
#include <conio.h>

/*14 - Elabore um algoritmo que informe o maior numero entre três números conhecido pelo usuário. (Considere número iguais)..*/
 
 void main(){
 	
 	float n1, n2, n3, nmaior; 
 	nmaior = 0;
 	
 	printf("Informe o primeiro nuhmero: ");
 	scanf("%f", &n1);
 	printf("Informe o segundo nuhmero: ");
 	scanf("%f", &n2);
 	printf("Informe o terceiro nuhmero: ");
 	scanf("%f", &n3);
 	
 	if (n1 > nmaior){
 		nmaior = n1;
	 }
	if (n2 > nmaior){
		nmaior = n2;
	}
	else{(n3 > nmaior);
		nmaior = n3;
	}

	
	printf("O maior nuhmero eh: %0.0f", nmaior);
	
	
 	
 	
 
 }
