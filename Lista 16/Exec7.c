#include <stdio.h>
#include <conio.h>

/*7 - Desenvolva um programa que apresente todos os números divisíveis por 4 na faixa de 20 a 60.*/


void main(){
	
	int i = 20, resultado;
	
	while (i <=60){
		resultado = i % 4 ;
		if( resultado == 0){
			printf("os nuhmero divisiveis por 4 entre 20 e 60 sao: %d\n", i);
		}
		i++;
	}
}
