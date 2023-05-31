#include <stdio.h>
#include <conio.h>


/*10.Escreva um algoritmo em, que leia um conjunto de 10 fichas, cada uma contendo,
 	o salário e a cor dos olhos de uma pessoas (cor azul = 1 s e 2 cor preto),
 	e calcule e imprima:

	- o maior salário;
	- a média de salário de quem tem cor dos olhos azul;
	- a média do salário da turma.
	- a quantidade de pessoas com olhos pretos.
*/

void main(){
	
	int i, olho, qtde_olhos_pretos=0, cont_total = 0, cont_azul = 0;
	float salario, maior_salario = 0, menor_salario = 0, salario_total = 0, med_salario = 0, salario_azul = 0, med_salario_azul = 0;
	
	for(i=1; i<=3;i++){
		printf("Informe o salario: \n");
		scanf("%f", &salario);
		printf("Informe a cor dos olhos 1 azul 2 preto: \n");
		scanf("%d", &olho);
		
		if(olho == 2){//qtde pessoas com olhos pretos
			qtde_olhos_pretos++;
		}
		
		if(salario > maior_salario){//o maior salario
			maior_salario = salario;
		}
		
		if(salario < menor_salario){//menor salario
			menor_salario = salario;
		}
		
		//media salario turma
		salario_total += salario;//acumulador salario
		cont_total ++;//contador turma
		med_salario = salario_total/cont_total;//media salario turmar
		
		if(olho == 1){
			cont_azul ++;//contador azul
			salario_azul += salario;//acumulador salario
			med_salario_azul = salario_azul/cont_azul;//media salario turmar
		}
	}
	printf("qtde olhos pretos: %d\n", qtde_olhos_pretos);	
	printf("Maior salahrio: %0.2f\n", maior_salario);
	printf("Media salahrio: %0.2f\n", med_salario);	
	printf("Media salahrio dos olhos azuis: %0.2f\n", med_salario_azul);
	
}
