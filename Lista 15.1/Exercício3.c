#include<stdio.h>
#include<conio.h>

/*3 - Faça um algoritmo que receba a altura e sexo de uma pessoa, calcule e exiba o seu peso ideal, utilizando as seguintes formulas:
	a.	Homens = (72.7 * altura) - 58
	b.	Mulheres = (62.1 * altura) - 44.7
*/
 
 void main(){
 	
 	float alt, peso, s;
 	
 	printf("Informe sua altura: ");
 	scanf("%f", &alt);
  	printf("Informe seu sexo 1(para homem) ou 0(para mulher): ");
 	scanf("%f", &s);
 	
 		if(s == 1){
 			peso = (72.7 * alt) - 58;
	 	}
	 		else{
	 		  	peso = (62.1 * alt) - 44.7;	
	 	}
 			printf("Seu peso ideal eh: %0.2f", peso);
 }
