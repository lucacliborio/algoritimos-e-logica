#include <stdio.h>
#include <conio.h>

/*6 - Criar um Calculador de Tabuadas. O usu�rio dever� digitar o n�mero desejado e o programa dever�
 fazer a tabuada desse n�mero de zero a 10.*/
 
 
 void main(){
 	
 	int i = 0, num, mult;
 	
 	printf("Informe um nuhmero que deseja a tabuada: ");
 	scanf("%d", &num);
 	
 	while( i <= 10){
 		mult = num * i;
 		printf("%d * %d = %d\n", num, i, mult);
 		i++;
	 }
 }
