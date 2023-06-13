#include<stdio.h>
#include<conio.h>

/*1. (1,00) - LIVRE - Dados três valores A, B e C, em que A e B são números reais e C é um inteiro,
 	pede-se para imprimir o resultado da operação aritmética de A por B de acordo com a opção informada
  	em C, sendo: 1 - subtração; 2 - divisão, 3 - soma e 4 - multiplicação. Se não for digitado uma das
   	opções, exibir opção inválida. Tratar erro de divisão por zero. Para cada repetição, deverá verificar
    a necessidade do usuário em continuar.*/

void main(){
	
	float n1, n2, sub = 0, div = 0, soma = 0, mult = 0;
	int n3, resp = 1;
	
	do{
		printf("Informe um valor: ");//recebendo os valores
		scanf("%f", &n1);
		printf("Informe um valor: ");
		scanf("%f", &n2);
		
		printf("Informe a opcao desejada: 1 - subtracao; 2 - divisao, 3 - soma e 4 - multiplicacao: ");//recebendo a opcao desejada
		scanf("%d", &n3);
		
		if(n3 ==1 ){//conta de subtracao
			sub = n1 - n2;
			printf("Resultado: %0.2f\n", sub);
		}
		else if(n3 == 2){// conta de divisao
				div = n1/n2;
				printf("Resultado: %0.2f\n", div);
			}
			else if(n3 == 3){//conta de adicao
				soma = n1+n2;
				printf("Resultado: %0.2f\n", soma);
			}	
				else if(n3 == 4){// conta de multiplicacao
					mult = n1 * n2; 
					printf("Resultado: %0.2f\n", mult);
				}
					else{
						printf("Opcao invalida!!!");
					}
					
		printf("Deseja continuar? 1-(sim) 2-(nao)");
		scanf("%d", &resp);
						
										
	}while(resp == 1);
}
