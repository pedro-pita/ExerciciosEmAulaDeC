#include <locale.h>
#include <stdlib.h>
#include <string.h>
struct morada{
	char cidade[80];
	int nPorta;
	
};
struct pessoa{
	char nomePessoa[80],morada[80];
	int idade, bi;
	struct morada endereco;
};

int main(){
	//iniciar as estruturas e atribuir 2 posições
	struct pessoa p,p1;
	/*para o acesso ao array da esrutura, usamos o operador '.'*/
	strcpy(p.nomePessoa, "Pedro");
	p.idade = 20;
	p.bi = 345345345;
	/*Usar operador '.' para referencia dos campos da estrutura */
	p.endereco.nPorta = 125;
	strcpy(p.endereco.cidade,"Porto da Cruz");
	printf("Introduza o nome da segunda pessoa");
	gets(p1.nomePessoa);
	printf("Introduza a idade da segunda pessoa");
	scanf("%d",&p1.idade);
	fflush(stdin);
	printf("Introduza o numero da porta da segunda pessoa");
	scanf("%d",&p1.endereco.nPorta);
	printf("%s, %d, %d\n",p.nomePessoa,p.idade,p.endereco.cidade);
	printf("%s, %d, %d\n",p1.nomePessoa,p1.idade,p1.endereco.cidade);
}
