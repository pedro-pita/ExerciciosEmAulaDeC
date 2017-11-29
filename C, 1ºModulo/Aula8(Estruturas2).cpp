#include <locale.h>
#include <stdlib.h>
#include <string.h>
struct pessoa{
	char nomePessoa[80],morada[80];
	int idade, bi;
};
struct carro{
	char marca[80],modelo[80];
	int idade, nDonos;
};
/*Desta forma empacotamos os dados comuns, sendo representaddos pelo struct*/
int main(){
	struct pessoa p;
	struct carro c;
	
	//atribuição
	
	printf("Introduza o nome da pessoa.");
	gets(p.nomePessoa);
	
	printf("Introduza a morada da pessoa.");
	gets(p.morada);
	
	printf("Introdua a idade da pesso.");
	scanf("%d",&p.idade);
	fflush(stdin);
	
	printf("Introdua o numero do bi da pessoa.");
	scanf("%d",&p.bi);
	fflush(stdin);
	
	printf("Introduza a marca do carro.");
	gets(c.marca);
	
	printf("Introduza o modelo do carro.");
	gets(c.modelo);
	
	printf("Introdua a idade do carro.");
	scanf("%d",&c.idade);
	fflush(stdin);
	
	printf("Introdua o numero de donos.");
	scanf("%d",&c.nDonos);
	fflush(stdin);
}
