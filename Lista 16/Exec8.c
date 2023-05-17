#include <stdio.h>
#include <conio.h>

/*8 - Elaborar um programa que apresente o resultado da soma dos valores pares situados na faixa
 numérica de 50 a 80.*/
 
 void main(){
 	
 	int i = 50, resultado, soma = 0;
 	
 	while (i <= 80){
 		resultado = i % 2;
 		if( resultado == 0){
 			soma = soma + i;
		 }
 		i++;
	 }
	 printf("O resultado da soma dos nuhmero pares de 0 ate 20 eh: %d\n", soma);
 }
