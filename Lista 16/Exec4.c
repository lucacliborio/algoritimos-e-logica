#include <stdio.h>
#include <conio.h>

/*4- Desenvolva um programa que apresente os quadrados dos números inteiros de 1 a 10.*/

void main(){
	
	int i = 1, pot;
	
	while(i <= 10){
		pot = i * i;
		printf("%d\n", pot);
		i++;
	}
}
