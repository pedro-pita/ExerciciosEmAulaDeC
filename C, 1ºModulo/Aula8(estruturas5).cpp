#include <locale.h>
#include <stdlib.h>
#include <string.h>
struct pessoa{
	char nomePessoa[80],morada[80];
	int idade, bi;
};
int main(){
	//iniciar as estruturas e atribuir 2 posições
	struct pessoa p[2];
	/*para o acesso ao array da esrutura, usamos o operador '.'*/
	strcpy(p[0].nomePessoa, "Pedro");
	p[0].idade = 20;
	p[1].idade = p[0].idade - 10;
	//printf("%d, %d", p[0].idade, p[1].idade);
	/*Continuar arrays com estruturas, desta froma podemos manipular var da estrutura como se fossem arrays */
	int i;
	for(i=0;i<2;i++){
		printf("Introdua o nome da Pessoa\n");
		gets(p[i].nomePessoa);
		fflush(stdin);
		printf("Introdua a morada da Pessoa\n");
		gets(p[i].morada);
		fflush(stdin);
		printf("Introdua a idade da Pessoa\n");
		scanf("%d",&p[i].idade);
		fflush(stdin);
		printf("Introdua o bi da Pessoa\n");
		scanf("%d",&p[i].bi);
		fflush(stdin);
	}
	for(i=0;i<2;i++)
		printf("%s, %s, %d, %d\n",p[i].nomePessoa,p[i].morada,p[i].idade,p[i].bi);
}
