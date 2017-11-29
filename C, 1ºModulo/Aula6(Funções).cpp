#include <stdio.h>
#include <locale.h>
void esperaEsprecao(){
	int tecla;
	printf("Pressione ENTER\n");
	do{
		tecla = getchar();
		//Se nao for barra de espeço 
		if(tecla != 32){
			//Se nao for barra de espaço
			if(tecla != 32 ){
				printf("Digite Barra e espaço pra salario");
			}
			while(tecla != 32); //32 é o Codigo ASCII da barra de espaço
		}
	}
}
int main(){
	esperaEspaço();
}
