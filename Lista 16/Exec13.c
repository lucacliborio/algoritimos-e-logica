#include<stdio.h>
#include <conio.h>

/*13 - Escreva um algoritmo em que receba o número da conta e o saldo de várias pessoas.
 	O algoritmo deve imprimir todas as contas, os respectivos saldos e uma das mensagens:
  	positivo/negativo. Ao final, o percentual de pessoas com saldo negativo. O algoritmo
   	acaba quando se digita um número negativo para a conta.*/
   
   
  void main(){
  	
  	float conta = 1, saldo = 0;
  	int i = 0;
  	
  	while(conta >= 0){
  		printf("Informe o nuhmero da conta: ");
  		scanf("%f", &conta);
  	
  		printf("Informe o saldo da conta: ");
  		scanf("%f", &saldo);
  		
  		if(saldo > 0){
  			printf("Conta : %0.0f\n", conta);
  			printf("Saldo : %0.2f\n", saldo);
  			printf("Saldo Positivo!!!\n");
		  } 
		  else if (saldo < 0){
		  	printf("Conta : %0.0f\n", conta);
  			printf("Saldo : %0.2f\n", saldo);
  			printf("Saldo Negativo!!!\n");
  			
  			i++;
		  } 
		  	else{
		  		printf("Conta : %0.0f\n", conta);
  				printf("Saldo : %0.2f\n", saldo);
  				printf("Sem saldo!!!\n");
		  	}	
	}	
		  
		printf("Clientes negativados: %0.0f\n", i);

  }
