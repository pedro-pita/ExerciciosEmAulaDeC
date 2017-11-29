#include <locale.h>
#include <stdlib.h>
int main(){
	//Criação de array de carateres
	char nome[80];
	printf("Digite: ");
	/*Usamos para ler 
	scanf()-> até digitar espaço o enter
	gets()-> termina na digitalização do enter
	*/
	//não necessita endereço visto ser um array
	/scanf("%s", nome);
	gets(nome);//termina na digitação do enter
	printf("Digite:%s",nome);
}
