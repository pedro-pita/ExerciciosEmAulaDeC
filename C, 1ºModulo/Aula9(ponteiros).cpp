#include <locale.h>
#include <stdlib.h>
#include <string.h>
/*
	Variaveis: armazena dados de um tipo (int, float, string, pessoa)
	Ponteiros:  tipo especial de variaveis que armazena edereços de memoria
*/
/*Formas de declarar:
		Variaveis: tipo_var nome_Var
		ponteiros: tipo_ponteiro *nome_ponteiro
*/
	enum semana{Domingo,Segunda,Terca,Quata,Quinta,Sexta,Sabado};
int main(){
/*	//var x do tipo inteiro
	int x;
	//ponteiro de x para tipo inteiro
	int *p;
	//combinação de var com ponteiros
	int z,*y;
	//Ponteiros nao inicializados pode ter um valor especial NUL,representa o dereço vazio, adrao (null)*/
	int p =10;
	int *x;
	x=&p;
	printf("x=%d\n",x);
	printf("&x=%d\n",&x);
	printf("p=%d\n",p);
	
}
