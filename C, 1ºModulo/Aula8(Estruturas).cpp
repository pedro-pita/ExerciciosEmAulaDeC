#include <locale.h>
#include <stdlib.h>
#include <string.h>
struct pessoa{
	char nomePessoa[80],morada[80];
	int idade, bi;
};
/*Desta forma empacotamos os dados comuns, sendo representaddos pelo struct*/
int main(){
	/*declaraçao de variaveis propria (_struct)
	referenciamos a estrutura com o operador struct nome:struct*/
	struct pessoa p;
	
	//Pessoa 1
	/*Acede a varios atributos/campos da estrutura, para tal usamos o operador '.'.*/	
	/*Leitura via teclado para o campo idade da estrutura pessoa */
	scanf("%d",&p.idade); //p.idade=35;
	/*Leitura via teclado para o campo bi da estrutura pessoa */
	scanf("%d",&p.bi);
	/*Leitura via teclado para o campo nomePessoa da estrutura pessoa*/
	gets(p.nomePessoa);
	printf("%s, %d, %d",p.nomePessoa,p.idade,p.bi);
	printf("nome1:%s ,idade:%i, bi:%i \n", p.nomePessoa,p.idade,p.bi);
	
	//Pessoa2
	//printf("nome1:%s ,idade:%i, morada:%s, bi:%i", nomePessoa2,idade2,morada2,bi2);
}
