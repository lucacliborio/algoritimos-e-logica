#include<stdio.h>
#include <conio.h>

/*2 - Uma agência de uma cidade do interior tem, no máximo, 10 clientes.
 	Criar um algoritmo em que possa receber o número da conta, nome e saldo
  	de cada cliente. Esse algoritmo deve imprimir todas as contas, os
   	respectivos saldos e uma das mensagens: positivo/negativo. A digitação
    acaba quando se digita -999 para um número da conta ou quando chegar a
	10. Ao final, deverá sair a qtde de clientes com saldo negativo, a 
	qtde de clientes da agência e o saldo total de todos os clientes somados.*/
   
   
  void main(){
  	
  	int conta, cont;
  	float saldo;
  	char nome[100];
  	
  	do{
  		printf("Informe o n° da conta: ");
  		scanf("%d", &conta);
  		printf("Informe o nome: ");
		scanf("%s", nome);
  		printf("Informe o saldo da conta: ");
  		scanf("%f", &saldo);
  		
  		
  		
  		cont++;
	  }	while(conta = -999 && cont <= 10 );
  }
