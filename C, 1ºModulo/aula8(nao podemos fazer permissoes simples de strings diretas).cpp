#include <locale.h>
#include <stdlib.h>
#include <string.h>
int main(){
	/* String array de carateres, permite armazenar um sequencia de carateres*/
	int main();
	char n1[80]="Sergio";
	char n2[80];
	/*Sendo as var um array não é possivel fazer atribuição simples do seu conteudo*/
//	n1=n2;//da erro
	
	/*Possivel solução*/
	int i;
	while(n1[i]!='\0'){
		n2[i]= n1[i];
		i++;
	}
	n2[i]='\0';
	printf("Digite:%s",n1);
	printf("Digite:%s",n2);
	/*verificarmos que é moroso e trabalhoso fazer uma copia por exemplo */
	
	/*strcat(para, de). concatena array de carateres*/
	char n4[50]= "Eu";
	char n5[50]= "Sérgio";
	
	strcat(n4,n5);
	printf("Nova: %s",n4);
	/* strcmp(para de). verifica se sao iguais 0, diferentes devolve valores diferentes de 0*/
	char n6[40]="Eu";
	char n7[40]="Sergio";
	if(strcmp(n6,n7)==0)
		printf("Iguais");
	else
		printf("Diferente");	

}
