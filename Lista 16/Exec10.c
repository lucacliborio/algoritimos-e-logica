#include <stdio.h>
#include <conio.h>

/*10 - Escreva um programa que leia o primeiro nome e a altura das moças inscritas em um concurso de beleza.
   Para cada leitura deverá ser realizado uma pergunta para o usuário para parar ou continuar
   (1 -continuar, 2 - parar). Ao final o programa deverá exibir: a altura da moça mais alta e o número de
   moças no concurso. Considere que todas as moças possuem altura diferente.*/
   
   
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
