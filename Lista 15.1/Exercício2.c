#include<stdio.h>
#include<conio.h>

/*2 - Fa�a um algoritmo que calcule e exiba o sal�rio reajustado de um funcion�rio de acordo com as seguintes regras abaixo:
	a.Sal�rio at� 1000,00, reajuste de 12%.
	b.	Sal�rio maior que 1000,00 reajuste de 10%
.*/
 
 void main(){
 	
 	float salario, reajuste12, reajuste10;
 	
 	printf("Informe seu salahrio: ");
 	scanf("%f", &salario);
 	
 	if( salario <= 1000 ){
		reajuste12 = (salario * 0.12) + salario;
		printf("Seu salahrio agora eh: %0.2f", reajuste12);
	 }
	 else{ (salario >= 1000 );
	 		reajuste10 = (salario * 0.10) + salario;
	 		printf("Seu salahrio agora eh: %0.2f", reajuste10);
	 }
}
