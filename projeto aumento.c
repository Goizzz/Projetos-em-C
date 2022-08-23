#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//aumento 

	float n1, n2;
  
  	//Entrada de dados
  	printf("Digite o salario: ");
  	scanf("%f",&n1);
  
  
  	//processamento
  	n2 = (n1 * 0.1) ;
  
  	//Saída
 	printf("aumento = %3.f\n",n2);

	printf("o salario final foi de: %3.f",n1+n2);
	
	
	
	return 0;
}
