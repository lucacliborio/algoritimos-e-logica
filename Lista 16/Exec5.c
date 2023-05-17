#include <stdio.h>
#include <conio.h>

/*5 - Elaborar um programa que apresente no final o somatório dos valores pares existentes na
 faixa de 1 até 20.*/
 
 
 void main(){
 	
 	int i = 1, resultado, soma = 0;
 	
 	while (i <= 20){
 		resultado = i % 2;
 		if(resultado == 0){
 			soma = soma + i;
		 }
		 i++;
	 }
	 printf("O resultado da soma dos nuhmero pares de 0 ate 20 eh: %d\n", soma);
 }
