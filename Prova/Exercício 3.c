#include<stdio.h>
#include<conio.h>

/*3. (2,00) WHILE - Construa um algoritmo que leia as seguintes informa��es do usu�rio: n�mero inteiro preferido,
	 saldo banc�rio atual, sexo (1-M;2-F). A cada leitura, o algoritmo dever� exibir se o n�mero � par ou �mpar,
  	se o saldo � positivo ou negativo e ao final, dever� mostrar: 
	- Total de n�meros pares; ok
	- Total de usu�rios com saldo negativo do sexo masculino; ok
	- Total de participantes;ok
	- Saldo acumulado de todos os participantes.ok
	Ap�s a leitura, o usu�rio dever� responder se deseja continuar ou n�o "Continuar: 1. Sim 2. N�o?.
	A repeti��o s� finaliza, quando o usu�rio responder "N�o".

*/

void main(){
	
	int i, n1, sexo, resp = 1, contpar = 0, contneg = 0;
	float saldo = 0, resto, saldototal;
	
	while(resp == 1){
		printf("Informe o seu numero inteiro preferido: ");//recebendo n inteiro
		scanf("%d", &n1);
		printf("Informe o seu saldo bancario: ");// recebendo saldo conta
		scanf("%f", &saldo);
		printf("Informe seu sexo 1-Masculino 2-Feminino: ");
		scanf("%d", &sexo);//recebendo sexo 
		
		resto = n1 %2;
		if(resto == 0){//descobrindo se o n � par ou impar
			printf("O numero eh par!!!\n");//par
			contpar++;
		}
		else{
			printf("O numero eh impar!!!\n");//impar
		} 
		
		if(saldo > 0){
			printf("Saldo positivo!!!\n");//saldo positivo
		}
		else if(saldo < 0) {
			printf("Saldo negativo!!!\n");//saldo negativo
		}
		else{
			printf("Sem saldo!!!\n");//sem saldo
		}
		
		
		if(sexo == 1){//homens com saldo negativo
			if(saldo < 0){
				contneg++;
			}
		}
		
		if(saldo > saldototal){//recebendo o saldo total
			saldototal = saldo + saldototal;
		}
		
		i++;
		
		printf("Deseja continuar? 1-Sim 2-Nao:\n");//repeticao
		scanf("%d", &resp);
	}	
	
	printf("O total de nuhmero pares eh de: %d\n", contpar);
	printf("O total de homens como saldo negativo: %d\n", contneg);
	printf("O total de participantes foi de: %d\n", i++);
	printf("O saldo total foi de: %0.2f", saldototal);
}
