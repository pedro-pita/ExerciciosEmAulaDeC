#include <stdio.h>
#include <locale.h>
void esperaEsprecao(){
	int tecla;
	printf("Pressione ENTER\n");
	do{
		tecla = getchar();
		//Se nao for barra de espe�o 
		if(tecla != 32){
			//Se nao for barra de espa�o
			if(tecla != 32 ){
				printf("Digite Barra e espa�o pra salario");
			}
			while(tecla != 32); //32 � o Codigo ASCII da barra de espa�o
		}
	}
}
int main(){
	esperaEspa�o();
}
