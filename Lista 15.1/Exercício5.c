#include<stdio.h>
#include<conio.h>

/*5 - Fa�a um algoritmo que receba o pre�o de custo e o pre�o de venda de um produto. Mostre como resultado se houve
 	lucro, preju�zo ou empate para este produto. Informe percentual de
 	lucro ou preju�zo em rela��o ao custo x venda.
*/
 
 void main(){
 	
 	float pcusto, pvenda, p;
 	
 	printf("Informe o preco de venda do produto: ");
 	scanf("%f", &pvenda);
 	printf("Informe o preco de custo do produto: ");
 	scanf("%f", &pcusto);
 	
 	if (pvenda > pcusto){
 		p = (pvenda-pcusto) *100/pcusto;
 		
 		printf("Lucro! %0.0f por cento.", p);
 		}
 			else if (pvenda < pcusto){
 				printf("Prejuizo! - %0.0f por cento", p);
			 }
			 else{
			 	printf("A venda foi realizada pelo preco de custo do produto");
			 }
 
 }
  	
 	
