#include <stdio.h>
#include <conio.h>

//5.	Escreva um algoritmo em que leia 5 números e imprima a soma dos positivos e o total de números negativos. 


void main(){
	
	int i, num, soma_pos = 0, cont_neg = 0;
	
	for(i=1; i<=5;i++){
		printf("Informe um nuhmero: ");
		scanf("%d", &num);
		
		if(num >= 0 ){//positivo
			soma_pos += num;//acumulando
		}
		else{//negativo
			cont_neg++;//contador
		}
	}
	printf("\nSoma dos Positivos: %d", soma_pos);
	printf("\nQtde dos negativos: %d", cont_neg);
}

 

