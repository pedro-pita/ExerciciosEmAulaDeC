#include <locale.h>
#include <stdlib.h>
#include <string.h>
/*
	Comando typedef - permite definir uma "referencia"(ou apelido)
	Sintaxe:
	typedef tipo existente novo_nome;
/*
struct pessoa{
	char nomePessoa[80],morada[80];
	int idade, bi;
};*/
typedef int inteiro;
int main(){
	int a =20;
	inteiro z = 20;
	z += a;
	printf("Soma=%d\n",z);
	
	struct pessoa{
		char nomePessoa[80],morada[80];
		int idade, bi;
	};
	
	typedef struct pessoa tpessoa;
	struct pessoa p;
	tpessoa p1;
	p.idade = 12;
	p1.idade = 25;
	printf("%d, %d\n", p.idade,p1.idade);
}
