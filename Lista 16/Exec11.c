#include<stdio.h>
#include <conio.h>

/*11 - Elaborar um programa que possibilite calcular a �rea de cada c�modo de uma resid�ncia 
	(por exemplo: sala, cozinha, banheiro, quartos, etc..). O programa deve solicitar a entrada do nome,
 	da largura e do comprimento de um determinado c�modo, em seguida dever� apresentar a �rea do c�modo
  	lido e tamb�m a mensagem solicitando ao usu�rio a confirma��o de continuar calculando novos c�modos.
   	A opera��o deve ser repetida at� que o usu�rio responda "1 - N�O". �rea = largura * comprimento.*/
   
   
  void main(){
	
	char comodo[40];
	float l, c, resp = 0, area;
	
	while(resp == 0){
		printf("Informe o nome do comodo: ");
		scanf("%s", comodo);
	
		printf("Informe a largura do comodo: ");
		scanf("%f", &l);
	
		printf("Informe o comprimento do comodo: ");
		scanf("%f", &c);
		
		area = l * c;
		
		printf("A ahrea do comodo eh de: %0.2f\n", area);
		
		printf("Deseja continuar? 0(Continuar) 1(Parar): ");
   		scanf("%f", &resp);
	}
}

