#include<stdio.h>
#include<conio.h>

/*1 - Faça um algoritmo que receba um número e diga se este número está no intervalo entre 100 e 200,
 se não, exibir "número fora do intervalo".*/
 
 void main(){
 	
 	float num;
 	
 	printf("Informe um nuhmero: ");
 	scanf("%f", &num);
 	
 	if (num >= 100 && num <=200){
 		printf("O nuhmero esta no intervalo entre 100 e 200: %0.0f", num);
	 }
	 else{
	 	printf1("O nuhmero esta fora do intervalo: %0.0f", num);
	 }
 }
