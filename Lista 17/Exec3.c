#include<stdio.h>
#include <conio.h>

/*3 - Escreva um algoritmo que receba a idade de 10 pessoas, calcule e exiba a
 	quantidade de pessoas maiores de idade, sendo que a maioridade é obtida após
  	se completar 18 anos.*/
   
   
  void main(){
  	
  	int idade, cont = 1, maior = 0;
  	
  	do{
  		printf("Informe sua idade: ");
  		scanf("%d", &idade);
  		
  		if(idade >= 18){
  			printf("Voce eh maior de idade!!!\n");
  			printf("Voce tem %d anos\n", idade);
  			
  			maior++;
		  }
		  else{
		  	printf("Voce eh menor de idade!!!\n");
		  }
		  
		  cont++;
	  }while(cont <= 3);
	  
	  printf("Qtde de pessoas com mais de 18 anos: %d\n", maior);
	  printf("Qtde total: %d", cont-1);
  }
