#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//media aritmetica

	//numeros	
float n1, n2, n3, media;
  
  //Entrada de dados
  printf("Digite o primeiro numero: ");
  scanf("%f",&n1);
  
  printf("Digite o segundo numero: ");
  scanf("%f",&n2);
  
  printf("Digite o terceiro numero: ");
  scanf("%f",&n3);
  
  //Processamento
  media = (n1 + n2 + n3) / 3;
  
  //Saída
  printf("Media = %.3f\n",media);
	
	
	
	
	return 0;
}
