#include <stdio.h>
#include <conio.h>

//7.	Criar um algoritmo em que leia dez números inteiros e imprima o maior e o menor número da lista.  


void main(){
	
	int i, num, num_maior, num_menor;
	
	for(i=1; i<=4;i++){
		printf("Informe um nuhmero: ");
		scanf("%d", &num);
		
		if(i == 1){//atribuindo o numero maior e menor na primeira leitura
			num_maior = num;
			num_menor = num;
		}
		
		if(num > num_maior){//atribuindo o maior n
			num_maior = num;
		}
		
		if(num < num_menor){//atribuindo o menor n
		  	num_menor = num;
		}	
	  
	}
	printf("\nO maior nuhmero eh: %d", num_maior);//informando o maior n
	printf("\nO menorr nuhmero eh: %d", num_menor);//informando o menor n
}
