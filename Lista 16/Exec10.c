#include <stdio.h>
#include <conio.h>

/*10 - Escreva um programa que leia o primeiro nome e a altura das mo�as inscritas em um concurso de beleza.
   Para cada leitura dever� ser realizado uma pergunta para o usu�rio para parar ou continuar
   (1 -continuar, 2 - parar). Ao final o programa dever� exibir: a altura da mo�a mais alta e o n�mero de
   mo�as no concurso. Considere que todas as mo�as possuem altura diferente.*/
   
   
   void main(){
   	
   	char nome[100];
   	float alt, resp = 1;
   	int i = 0;
   	
   	while(resp == 1){
   		
   		printf("Informe seu nome: ");
   		scanf("%s", nome);
   	
   		printf("Informe sua altura: ");
   		scanf("%f", &alt);
   		
   		printf("Deseja continuar? 1(Continuar) 2(Parar): ");
   		scanf("%f", &resp);
	}
    	i++;
   	
   	
   	
   }
