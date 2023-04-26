#include <stdio.h>
#include <conio.h>

/*9 - Faça um algoritmo que leia a idade de uma pessoa e ao final exiba quantos meses, dias, horas, 
minutos e segundo que essa pessoa já viveu.*/

void main(){
	
	float idade, meses, dias, horas, minutos, segundos;
	
	printf("Informe sua idade: ");
	scanf("%f", &idade);
	meses = idade * 12;
	dias = meses *30;
	horas = dias * 24;
	minutos = horas * 60;
	segundos = minutos * 90;
	printf("Voce ja viveu: %f", meses, "meses");
	printf("\nVoce ja viveu: %f", dias, "dias");
	printf("\nVoce ja viveu: %f", horas, "horas");
	printf("\nVoce ja viveu: %f", minutos, "minutos");
	printf("\nVoce ja viveu: %f", segundos, "segundos");
}
