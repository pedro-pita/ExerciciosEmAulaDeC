#include <locale.h>
#include <stdlib.h>
int main(){
	//Cria��o de array de carateres
	char nome[80];
	printf("Digite: ");
	/*Usamos para ler 
	scanf()-> at� digitar espa�o o enter
	gets()-> termina na digitaliza��o do enter
	*/
	//n�o necessita endere�o visto ser um array
	/scanf("%s", nome);
	gets(nome);//termina na digita��o do enter
	printf("Digite:%s",nome);
}
