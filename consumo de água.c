#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
	
	int main() {
	
	float c;
	int d=0,ano=0;
	char mes[20];
	
	//entrada dos dados do consumo
	do
	{
		printf("bem vindo a pesquisa\n");
		printf("para comecarmos informe o consumo em metros cubicos que voce tem mensalmente\n");
		scanf("%f",&c);
		fflush;
		if(c<=2.1 && c>0){
			printf("o consumo foi baixo\n");
		}else{
			if(c>2.1 && c<=6.1){
				printf("o consumo foi normal\n");
			}else{
				if(c>6.1 && c<=10.5){
					printf("o consumo alto\n");
				}else{
					if(c>10.5){
						printf("o consumo foi exagerado\n");
					}else{
						if(c<0){
							printf("não existe consumo negativo\n");
							printf("tente novamente\n\n");
						}
					}
				}
			}
		}
		
	}while (c<0);
	
	
	//entrada dados sobre a data
	do{
		printf("em qual data voce esta preenchendo o formulario?\n");
		printf("informe o dia:");
		scanf("%d",&d);
		if (d < 1 || d>32)
		printf("dia invalido\n");
	}while(d < 1 || d>32);

		printf("informe o mes (por extenso):");
		scanf("%s",&mes);
		if(strcmp(mes, "dezembro")==0 && d>12){
			printf("a partir do dia 12 de dezembro nos nao trabalhamos\n");
			printf("digite outra data ou feche o formulario\n\n\n");
		}
		
	//entrada ano
	printf("em qual ano voce esta preenchendo o formulario?");
	scanf("%d",&ano);
	
	//saida dado consumo
	printf("o consumo mensal foi de %3.f\n",c);
	if(c<=2.1 && c>0){
		printf("o consumo foi baixo\n");
	}else{
		if(c>2.1 && c<=6.1){
			printf("o consumo foi normal\n");
		}else{
			if(c>6.1 && c<=10.5){
				printf("o consumo alto\n");
			}else{
				if(c>10.5){
					printf("o consumo foi exagerado\n");
				}
			}
		}
	}
	
	//tratamento ano bissesto
	printf("a data foi: %d de %s de %d\n",d,mes,ano);
	if(ano%4==0 && ano%100>0 || ano%400==0){
		printf("O ano e bissesto\n\n");
	}else{
		printf("O ano nao e bissesto\n\n");
	}
	
	printf("Muito obrigado por participar da pesquisa, tenha um bom dia!!!");
	
	
	
	
	
	
	
	return 0;
}
