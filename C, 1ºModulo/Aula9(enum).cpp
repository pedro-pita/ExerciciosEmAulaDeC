#include <locale.h>
#include <stdlib.h>
#include <string.h>
/*
	Enum- pode ser vista como uma lista de constantes, onde cada constante possui um nome significativo sintaxe:
		enum nome_enum{enum_1,enum_2}
*/
	enum semana{Domingo,Segunda,Terca,Quata,Quinta,Sexta,Sabado};
int main(){
	enum semana s;
	s= Quinta;
	/*
		è atribuido um valo a variavel 's', senfo o 's' um identificador que representa um numero da lista
	*/
	if(s == Quinta)
		printf("Igual\n");
	else
		printf("Diferente");
		
	enum c_escapes{novaLinha ='\n', tabulacao='\t'};
	enum c_escapes e =  novaLinha;
	printf("\nPedro %c Na linha seguinte \n Ola %c sdsdd",e,e);
	printf("\nPedro %c Na linha seguinte \n Ola %c sdsdd",novaLinha,tabulacao);
	
	
}
