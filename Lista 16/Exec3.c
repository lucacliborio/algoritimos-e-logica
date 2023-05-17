#include <stdio.h>
#include <conio.h>

/*3 - Faça um programa que mostre os valores da tabuada do dois de 0 a 10.*/

void main(){
	
	int i = 0, mult;
	
	while(i <= 10){
		mult = 2 * i;
		printf("2 x %d = %d\n", i, mult);
		i++;
	}
	
}

