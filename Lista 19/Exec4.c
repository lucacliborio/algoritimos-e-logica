#include <stdio.h>
#include <conio.h>


/*4.Um cinema possui capacidade de 6 lugares e est� sempre com ocupa��o total. Certo dia, cada espectador
 	respondeu a um question�rio, no qual constava, sua idade e sua opini�o em rela��o ao filme, sendo
	o	Nota 		Significado
	o	1 		�timo
	o	2 		Bom
	o	3 		Regular
	o	4 		Ruim
	o	5 		P�ssimo
	
	Elabore um algoritmo que, lendo estes dados, calcule e imprima:
	- A quantidade de respostas �timo; ok
	- A diferen�a percentual entre respostas bom e regular; --
	- A m�dia de idade das pessoas que responderam ruim; ok
	- A porcentagem de respostas p�ssimo e a maior idade que utilizou esta op��o; --
	- A diferen�a de idade entre a maior idade que respondeu �timo e a maior idade que respondeu ruim. --
*/

void main(){
	
	int i = 1, nota = 0, otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0, idade = 0, idadetruim = 0, medruim = 0, maioridade = 0, menoridade = 0;
	float percbr = 0 ;
	
	while(i <= 3){
		printf("Informe seu idade: ");
		scanf("%d", &idade);
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
			idadetruim = idade + idadetruim;	
		}

		if(nota == 5){
			pessimo++;//qtde de votos pessimo
		}
		i++;
						
	}
	// media idade das pessoas ruim
	medruim = idadetruim/ruim;
	//conta porcentagem bom e regular
	percbr == (bom/regular)*100;

	
	printf("Qtde de respostas otimo: %0.0d\n", otimo);
	//printf("Diferenca percentual bom e regular: %0.1f%%\n", percbr);--
	printf("Mehdia de idade das pessoas que responderam ruim: %0.0d\n", medruim);
	
	
}
