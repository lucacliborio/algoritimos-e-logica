#include<stdio.h>
#include <conio.h>

/*1 - Escreva um programa para ler 2 notas de um aluno, calcular e imprimir
 	a média final. Logo após escrever a mensagem "Calcular a média de outro aluno
  	[1]Sim [0]Não?" e solicitar um resposta. Se a resposta for "1", o programa
   	deve ser executado novamente, caso contrário deve ser encerrado imprimindo
    a quantidade de alunos aprovados.*/
   
   
  void main(){
  	
  	float n1, n2, media = 0;
  	int resp = 1, aprov;
  	
  	do{
  		printf("Informe a primeira nota: ");
  		scanf("%f", &n1);
  	
	  	printf("Informe a segunda nota: ");
	  	scanf("%f", &n2);
	  	media = (n1+n2) / 2;
	  	printf("Mehdia: %0.2f", media);
	  	if (media >=7){
	  		aprov++;
		}
		printf("\nDeseja continuar? 1(sim) 2(nao).");
	  	scanf("%d", &resp);
	}while (resp == 1);
	 	printf("Qtde de aprovados: %d", aprov++);
  }
