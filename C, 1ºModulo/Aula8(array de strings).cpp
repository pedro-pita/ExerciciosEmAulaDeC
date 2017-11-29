#include <locale.h>
#include <stdlib.h>
int main(){
	/*inicialização por array, \0 indica termino da palavra*/
	char nomes1[10] = {'A','Z','D','h','\0'};
	printf("Digite:%s",nomes1);
	/*com aspas duplas, preenche ,automaticamente \o */
	char nomes2[20]="Aurelio Araujo";
	printf("Digite:%s",nomes2);
	/*sendo uma string podemos aceder a cada posição do array */
	nomes2[2]= 'D';
	printf("Digite",nomes2);
	/* \0 a var nomes2 tem 20 carateres de espaço caso seja atribuido o '\0' numa posição especifica o interpretador ignora o restante texto*/
	nomes2[2]='\0';
	printf("Digite:%s", nomes2);
}
