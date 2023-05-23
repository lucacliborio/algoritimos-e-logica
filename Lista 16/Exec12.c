#include<stdio.h>
#include <conio.h>

/*12 - Faça um programa que leia um número indeterminado de idades. A última idade lida,
 	que não entrará nos cálculos, deverá ser igual a zero. Ao final programa deverá escrever
  	quantas idades foram lidas, calcular e escrever a média de idade desse grupo de idades.*/
   
   
  void main(){
  	
  	float id = 1, resp = 1;
  	int i = 0;
  	
  	while(id > 0){
  		
  		printf("Informe um idade: ");
  		scanf("%f", &id);	
   		i++;
	}
		printf("Foram lidas %0.0i idades", i-1);
  }
