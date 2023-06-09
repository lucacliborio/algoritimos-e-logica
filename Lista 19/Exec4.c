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
	- A média de idade das pessoas que responderam ruim; ok
	- A porcentagem de respostas péssimo e a maior idade que utilizou esta opção; ok
	- A diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim. ok
*/

void main(){
	
	float percbr = 0, i = 1, nota = 0, otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0, idade = 0, idadetruim = 0, medruim = 0, idademaiorot = 0, idademaioruim = 0, maioridade = 0; 
	float porcpessimo = 0, maioridadepessimo = 0;
	
	while(i <= 4){
		printf("Informe seu idade: ");
		scanf("%f", &idade);
		printf("Informe sua nota para o cinema : ");
		scanf("%f", &nota);
		
		if(nota == 1){
			otimo++;//qtde de votos otimo
			
			if(idade > idademaiorot){
			idademaiorot = idade;
			}
		}
	
		if(nota == 2){
			bom++;//qtde de votos bom
		}
	
		if(nota == 3){
			regular++;//qtde de votos regular
		}
			
		if(nota == 4){
			ruim++;//qtde de votos ruim
			idadetruim = idade + idadetruim;
			
			if(idade > idademaioruim){
				idademaioruim = idade;
			}	
		}
			

		if(nota == 5){
			pessimo++;//qtde de votos pessimo
			
			if(idade > maioridadepessimo){
				maioridadepessimo = idade;
			}
		
		}
		i++;
						
	}
	
	if(ruim > 0){
		medruim = idadetruim/ruim; // media idade das pessoas ruim
	}
	
	if(bom > regular){
		percbr = (bom - regular) /i *100; //conta porcentagem bom e regular
	}
	
	
	if(bom == regular){
		percbr = 0; //conta porcentagem bom e regular
	}
	
	
	//diferença idade maior otima e maior ruim
	maioridade = idademaiorot-idademaioruim; 
	
	//conta porcentagem pessimo
	porcpessimo = pessimo / (i-1) *100;

	
	printf("Qtde de respostas otimo: %0.0f\n", otimo);
	printf("Diferenca percentual bom e regular: %0.1f%%\n", percbr);
	printf("Mehdia de idade das pessoas que responderam ruim: %0.0f\n", medruim);
	printf("Porcentagem de votos pessimo e a maior idade que utilizou esta opcao: %0.1f, %0.0f \n", porcpessimo, maioridadepessimo);
	printf("Diferenca entre a maior idade otima e a maior idade ruim: %0.0f\n", maioridade);
	
	
}
