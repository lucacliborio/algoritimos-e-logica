#include <stdio.h>
#include<stdio.h>
#include <conio.h>

/*10 - Escreva um programa que leia o primeiro nome e a altura das mo�as inscritas em um concurso de beleza.
   Para cada leitura dever� ser realizado uma pergunta para o usu�rio para parar ou continuar
   (1 -continuar, 2 - parar). Ao final o programa dever� exibir: a altura da mo�a mais alta e o n�mero de
   mo�as no concurso. Considere que todas as mo�as possuem altura diferente.*/
   
   
   void main(){
   	
   	char nome[100];
   	float alt, altmaior = 0;
   	int i = 0, resp = 1;
   	
   	while(resp == 1){
   		
   		printf("Informe seu nome: ");
   		scanf("%s", nome);
   	
   		printf("Informe sua altura: ");
   		scanf("%f", &alt);
   		
   		printf("Deseja continuar? 1(Continuar) 2(Parar): ");
   		scanf("%f", &resp);
   		
   		i++;
	}
		
	
	
	if (alt > altmaior){
		altmaior = alt;
	}
    	
   	
   		printf("A mulher mais alta tem a altura de : %0.2f\n", altmaior);
   		printf("A quantidade de mulheres participantes eh de: %i", i);
   	
   	
   }
