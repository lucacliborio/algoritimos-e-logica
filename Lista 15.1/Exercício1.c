#include<stdio.h>
#include<conio.h>

/*1 - Fa�a um algoritmo que receba um n�mero e diga se este n�mero est� no intervalo entre 100 e 200,
 se n�o, exibir "n�mero fora do intervalo".*/
 
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
