#include <stdio.h>
#include <conio.h>

/*13 - Faça um algoritmo que ao receber um número qualquer, seja capaz de verificar se o mesmo é ou não negativo.*/
 
 void main(){
 	
 	float n;
	
	printf("Informe um nuhmero: ");
	scanf("%f", &n);
	
	if (n > 0){
		printf("Nuhmero positivo: %0.0f", n);
	}
	else{ (n < 0);
		printf("Nuhmero negativo: %0.0f", n);
	}
	
 }
