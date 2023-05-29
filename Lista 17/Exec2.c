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
  	
  	int conta, qtdetotal = 1, saldneg = 0;
  	float saldo = 0, saldototal = 0;
  	char nome[100];
  	
  	do{
  		printf("Informe o n° da conta: ");
  		scanf("%d", &conta);
  		if(conta != -999){
  			printf("Informe o nome: ");
			scanf("%s", nome);
  			printf("Informe o saldo da conta: ");
  			scanf("%f", &saldo);
		  }
  		
  		if(saldo < 0){
  			printf("Conta: %d\n", conta);
  			printf("Saldo: %0.2f\n", saldo);
  			printf("Saldo Negativo!!!\n");
  			
  			saldneg++;
		  }
		  else
		  	if(saldo > 0){
		  	printf("Conta: %d\n", conta);
  			printf("Saldo: %0.2f\n", saldo);
  			printf("Saldo Positivo!!!\n");
  			
		  }
		  else{
		  	printf("Sem saldo!!!\n");
		  }
			
			qtdetotal++;
			saldototal = saldo + saldototal;
	  }while(qtdetotal <=10);
	  
	  
	  printf("Qtde de pessoas com saldo negativo: %d\n", saldneg);
	  printf("Qtde total de clientes da agencia: %d\n", qtdetotal-1);
	  printf("Saldo total de todos os clientes: %0.2f\n", saldototal);
}
	  
  
