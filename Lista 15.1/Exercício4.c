#include<stdio.h>
#include<conio.h>

/*4 - Fa�a um algoritmo que receba tr�s notas de um aluno, calcule e exiba a m�dia aritm�tica entre essas tr�s notas e uma mensagem que segue as regras abaixo:
	a.	M�dia < 5 - Reprovado
	b.	M�dia >= 5 e < 7 - Exame
	c.	M�dia >= 7 Aprovado	
*/
 
 void main(){
 	
 	float n1, n2, n3, med;
 	
 	printf("Informe sua nota: ");
 	scanf("%f", &n1);
 	printf("Informe sua nota: ");
 	scanf("%f", &n2);
 	printf("Informe sua nota: ");
 	scanf("%f", &n3);
 	
 	med = (n1 + n2 + n3) / 3;
 	
 		if(med < 5){
 			printf("Valor da mehdia eh: %0.2f,  Reprovado", med);
	 	}
	 	 else if (med >= 5 && med<7 ){
	 	 	  printf("Valor da mehdia eh: %0.2f, Exame", med);
		  } 
		  else{
		  		printf("Valor da mehdia eh: %0.2f, Aprovado", med);
		  }
	 		
	 
 }
 	
