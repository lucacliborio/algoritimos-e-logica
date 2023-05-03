#include <stdio.h>
#include <conio.h>

/*16 - Switch - Faça um algoritmo que leia um número de 0 até 10 e o exiba por extenso, caso o número
 seja diferente do intervalo, exibir uma mensagem de erro.
Numero		Por extenso
1			Um
2			Dois
3			Três
4			Quatro
...
10			Dez
Outros número	Inválido

*/
 
 void main(){
 	
 	int n;
 	
 	printf("Informe um nuhmero: ");
 	scanf("%d", &n);
 	
 	if(n == 1){
 		printf("UM");
	}
	else
		if(n == 2){
			printf("DOIS");
		}
		else
			if(n == 3){
				printf("TRES");
			}
			else
				if(n == 4){
					printf("QUATRO");
				}
				else
					if(n == 5){
						printf("CINCO")
					}
					else
						if(n == 6){
							printf("SEIS")	
						}
						else
							if (n == 7){
								printf("SETE")
							}
							else
								if(n == 8){
									printf("OITO")
								}
								else
									if(n == 9){
										printf("NOVE")
									}
									else
										if(n == 10){
											printf("DEZ")
										}
					
}	
		
	
 	
