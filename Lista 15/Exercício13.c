#include <stdio.h>
#include <conio.h>

/*13 - Fa�a um algoritmo que ao receber um n�mero qualquer, seja capaz de verificar se o mesmo � ou n�o negativo.*/
 
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
