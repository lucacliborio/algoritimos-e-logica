#include<stdio.h>
#include<conio.h>

/*2. (2,00) FOR - Faça um programa para ler a salário, cor dos alhos (1-azul, 2-verde, 3-preto ou 4-castanho)
	 e o sexo (1-feminino, 2-masculino) de 4 pessoas. Calcular e escrever:
	- O maior salário que informou a cor dos olhos verde; ok
	- O menor salário do sexo masculino; ok
	- A média salarial das mulheres com cor dos olhos azul; ok
	- Total de pessoas com cor do olho castanho.
*/

void main(){
				
	float salario, maiorsalarioverde = 0, menorsalariomasc = 0, molhoazul = 0, salariomazul = 0, medsalariomazul = 0;
	int i, olho, sexo, totalolhocast = 1;			
					
	for(i=1; i<=2;i++){
		printf("Informe o salario: ");
		scanf("%f", &salario);//recebendo o salario
		
		printf("Informe a cor dos olhor (1-azul, 2-verde, 3-preto ou 4-castanho): ");
		scanf("%d", &olho);//recebendo cor do olho
		
		printf("Informe o sexo: 1-Masculino 2-Feminino: ");
		scanf("%d", &sexo);//recebendo o sexo
		
		if(olho == 2){//maior salario olhos verdes
			maiorsalarioverde = salario;
		}
		
		if(sexo == 1){//menor salario homens
			menorsalariomasc = salario;
		}
		
		if(sexo == 2){//mulheres olhos azuis
			if(olho == 1){
				molhoazul++;
				salariomazul = salario + salariomazul;
			}
		}
		
		if(olho == 4){//total de olhos castanhos
			totalolhocast++;
		}
	}
	
	//media salarial mulheres olhos azuis
	medsalariomazul = salariomazul/molhoazul;
	
	printf("Maior salario de quem tem olho verde: %0.2f\n", maiorsalarioverde);
	printf("Menor salario do sexo masculino: %0.2f\n", menorsalariomasc);
	printf("Media salarial das mulheres de olhos azuis: %0.2f\n", medsalariomazul );
	printf("Total de pessoas com os olhos castanhos: %d", totalolhocast - 1);
}
