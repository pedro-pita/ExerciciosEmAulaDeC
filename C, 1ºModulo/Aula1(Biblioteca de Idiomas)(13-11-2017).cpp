#include <stdio.h>
#include <locale.h> //biblioteca de idiomas
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Ola o programa espera um instu��o. \n");
	system("pause");//faz pausa e espera que seja carregado algum botao
	system("cls");//Limpa a consola
	printf("Alguma tecla foi pressionada. \n");
	printf("Volta a esmperar novas instru��es. \n");
	system("pause");//faz pausa e espera que seja carregado algum botao
	system("cls");//Limpa a consola
	printf("Alguma tecla foi pressionada. \n");
}
