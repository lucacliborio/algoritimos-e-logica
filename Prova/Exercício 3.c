#include<stdio.h>
#include<conio.h>

/*3. (2,00) WHILE - Construa um algoritmo que leia as seguintes informações do usuário: número inteiro preferido,
	 saldo bancário atual, sexo (1-M;2-F). A cada leitura, o algoritmo deverá exibir se o número é par ou ímpar,
  	se o saldo é positivo ou negativo e ao final, deverá mostrar: 
	- Total de números pares; ok
	- Total de usuários com saldo negativo do sexo masculino; ok
	- Total de participantes;ok
	- Saldo acumulado de todos os participantes.ok
	Após a leitura, o usuário deverá responder se deseja continuar ou não "Continuar: 1. Sim 2. Não?.
	A repetição só finaliza, quando o usuário responder "Não".

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
		if(resto == 0){//descobrindo se o n é par ou impar
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
