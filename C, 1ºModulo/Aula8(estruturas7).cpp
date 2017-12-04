#include <locale.h>
#include <stdlib.h>
#include <string.h>
//Struct em fun��es(parametros) e retorno de struct
struct pessoa{
	char nomePessoa[80], morada[80];
	int idade, bi;
};
int imprimir(struct pessoa p){
	//Struct em fun��es (parametros)
	int r=0;
	if(p.idade >=18){
		printf("%s %d \n",p.nomePessoa,p.idade);
		r=1;
	}else
		r=0;
		return r;
}
int imprimir1(struct pessoa p){
	//Struct em fun��es (parametros)
	int r=0;
	if(p.idade >=25){
		printf("%s %d \n",p.nomePessoa,p.idade);
		r=1;
	}else
		r=0;
		return r;
}
//return struct
struct pessoa preencherPessoa(char nomeP[], char mora[], int ida, int bi){
	struct pessoa p;
	strcpy(p.nomePessoa, nomeP);
	strcpy(p.morada, mora);
	p.idade = ida;
	p.bi = bi;
	return p;
	
};
/*Se tivessemos *p.nomPessoa ao inves de (*p).nomePessoa estariamos a tentar acder ao elemento nomePessoa, que � um campo da struct que por sua vez � um apontador "apontado" pelo ponteiro p.
No fundo tentamos aceder ao ponteiro nomePessoa, da estrutura p(representa uma pessoa).
No fundo tentamos aceder ao ponteiro nomePessoa, da esturuta p(representa uma pessoa).
Daria ERRO(problemas de compila��o)
Pk p n�o � uma estrutura, muito menos tem um campo nomePessoa, da forma que n�s refermos a p, ele n�o � uma estrutura mas um apontador para zona de memoria.
Isto acontece porque em 'C' o operador '.' tem precedencia sobre qualquer outro operador, neste caso sobre o '*'.
Entao referncimos que primeiro deve capturar o enferen�o apontado por p(*p), s� depois nesse endere�o capturar o campo nomePessoa.*/
//p � o apontador da pessoa e n�o a pessoa, se fizessemos p* estariamos a indicar que p � a pessoa o que � mentira e entao temos de fazer (*p) para indicar que p � o apontador da pessoa*/
//(*p).nomePessoa <=> ponteiro->*/
//para podermos usar este apontador temos de usar o (struct pessoa *p)
/*(*p)->apontador para a zona da memoria onde � guardada a estrutura passada
function por referencia*/
void preencherPessoaRef(struct pessoa *p){
	printf("Nome:");
	//gets((*p).nomePessoa);
	//ou
	gets(p->nomePessoa);
	printf("Morada:");
	gets(p->nomePessoa);
	printf("Idade:");
	/*No caso de var do tipo inteiro temos que passar a referencia para o endere�o que o apontado referencia*/
	scanf("%d",&((*p).idade));
	printf("Bi");
	scanf("%d",&((*p).bi));
}
int main(){
	//iniciar as estruturas e atribuir 2 pos
	struct pessoa p={"Pedro","Funchal",23,223123123};
	struct pessoa p_Function = preencherPessoa("Henrique","Ponta do Sol",23,123123123);
	int resultado = imprimir(p);
	int resultado1 = imprimir1(p);
	printf("A pessoa tem mais de 18 anos? %d\n",resultado);
	printf("A pessoa tem mais de 25 anos? %d\n",resultado1);
	
	struct pessoa p_ref;
	preencherPessoaRef(&p_ref);
	imprimir(p_ref);
	
}
