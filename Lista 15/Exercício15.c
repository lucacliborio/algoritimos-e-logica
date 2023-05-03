#include <stdio.h>
#include <conio.h>

/*15 - Elabore um algoritmo que seja capaz de transformar graus Fahrenheit em Celsius utilizando a formula dada:
	C = ((F - 32) * 5) / 9
*/
 
 void main(){
 	
 	float fahrenheit, celcius;
 	
 	printf("Informe os graus em Fahrenheit: ");
 	scanf("%f", &fahrenheit);
 	celcius = (5 * (fahrenheit - 32)) / 9;
 	printf("A temperatura em graus Celcius eh: %f", celcius);
 }
 
