#include <locale.h>
#include <stdlib.h>
#include <string.h>
struct pessoa{
	char nomePessoa[80],morada[80];
	int idade, bi;
};
struct funcionario{
	char nomePessoa[80],morada[80];
	int idade, bi;
};
int main(){
	/*iniciar as estruturas*/
	struct pessoa p,p1={"Ana","Porto Santo",45,12312313};
	struct funcionario f;
	
	/*Atribuição entre estruturas iguais*/
	p = p1; /*Sucesso*/
	/*Devolve erro, uma ve que mesmo sendo os mesmos campos, a esturuta é criada de forma diferente, funcionario <> pessoa, da mesma forma que int <> string*/
	
	f.bi = p.bi;
	printf("%d",f.bi);
	
	strcpy(f.nomePessoa, p1.nomePessoa;
	printf("%s", f.nomePessoa);
}
