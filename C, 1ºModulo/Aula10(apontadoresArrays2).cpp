#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	/*ponteiros com arrays*/
int main(){
	/*
		
	*/
	int x= 12;
	int *p = &x;
	int **p2 = &p;
	//p2->*p->&x, logo mostra valor de p2(endereço de p)
	printf("p2: %d\n",p2);//&p
	//p2->&p->&x, logo mostra o valor apontado por p2(endereço de x)
	printf("*p2: %d\n",*p2);//&x
	/*p2->&p->&x, logo, mostra o valor apontado por p(valor de x)*/
	printf("**p2: %d\n",**p2);// x = 12
	/*Alterar o valor apontado pelo ponteiro de um ponteiro */
	**p2 =4354;
	printf("Valor de x = %d\n", x);//x = 12
	/*
		Memoria
		#		var			conteudo
		1		null		""
		2		null		""
		3		int **p2
		4		null		""
		5		int *p
		6		null		""
		7		int x
	*/
}
