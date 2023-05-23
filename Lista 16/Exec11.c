#include<stdio.h>
#include <conio.h>

/*11 - Elaborar um programa que possibilite calcular a área de cada cômodo de uma residência 
	(por exemplo: sala, cozinha, banheiro, quartos, etc..). O programa deve solicitar a entrada do nome,
 	da largura e do comprimento de um determinado cômodo, em seguida deverá apresentar a área do cômodo
  	lido e também a mensagem solicitando ao usuário a confirmação de continuar calculando novos cômodos.
   	A operação deve ser repetida até que o usuário responda "1 - NÃO". Área = largura * comprimento.*/
   
   
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

