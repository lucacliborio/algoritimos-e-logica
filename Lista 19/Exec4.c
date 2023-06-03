#include <stdio.h>
#include <conio.h>


/*4.Um cinema possui capacidade de 6 lugares e está sempre com ocupação total. Certo dia, cada espectador
 	respondeu a um questionário, no qual constava, sua idade e sua opinião em relação ao filme, sendo
	o	Nota 		Significado
	o	1 		Ótimo
	o	2 		Bom
	o	3 		Regular
	o	4 		Ruim
	o	5 		Péssimo
	
	Elabore um algoritmo que, lendo estes dados, calcule e imprima:
	- A quantidade de respostas ótimo; ok
	- A diferença percentual entre respostas bom e regular; --
	- A média de idade das pessoas que responderam ruim; --
	- A porcentagem de respostas péssimo e a maior idade que utilizou esta opção; --
	- A diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim. --
*/

void main(){
	
	int i = 1, nota = 0, otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0, idade = 0;
	float percbr = 0 ;
	
	while(i <= 4){
		//printf("Informe seu idade: ");
		//scanf("%d", &idade);
		printf("Informe sua nota para o cinema : ");
		scanf("%d", &nota);
		
		if(nota == 1){
			otimo++;//qtde de votos otimo
		}
	
		if(nota == 2){
			bom++;//qtde de votos bom
		}
	
		if(nota == 3){
			regular++;//qtde de votos regular
		}
			
		if(nota == 4){
			ruim++;//qtde de votos ruim
		}

		if(nota == 5){
			pessimo++;//qtde de votos pessimo
	}
		i++;
						
	}
	
	//conta porcentagem bom e regular
	percbr == (bom/regular)*100;

	
	printf("Qtde de responstas otimo: %0.0d\n", otimo);
	printf("Diferenca percentual bom e regular: %0.1f%%", percbr);
}
