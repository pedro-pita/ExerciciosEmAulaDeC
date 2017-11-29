#include <string.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	/*String: array de carteres, ermite armazenar uma sequencia de carateres*/
	/*strien- tamanho da string, nao contabeliza a \0*/
	//captura o seu conteudo, noa o tamanho da criação[80]
	char nStr[14] = "Sérgio Araujo";
	int tamanho_string = strlen(nStr);
	printf("tam:%d ", tamanho_string);
	//strcpy (para,ele)-copia, alterando caso nao esteja vazia
	char n3[]="ola";
	strcpy(n3,nStr);
	printf("Nova: %a", n3);
}
