#include<stdio.h>
#include <conio.h>

/*12 - Fa�a um programa que leia um n�mero indeterminado de idades. A �ltima idade lida,
 	que n�o entrar� nos c�lculos, dever� ser igual a zero. Ao final programa dever� escrever
  	quantas idades foram lidas, calcular e escrever a m�dia de idade desse grupo de idades.*/
   
   
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
