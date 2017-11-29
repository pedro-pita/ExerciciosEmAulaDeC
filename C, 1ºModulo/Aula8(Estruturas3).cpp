#include <locale.h>
#include <stdlib.h>
#include <string.h>
struct pessoa{
	char nomePessoa[80],morada[80];
	int idade, bi;
};
/*Desta forma empacotamos os dados comuns, sendo representaddos pelo struct*/
int main(){
	//inicializa a estrutura
	struct pessoa p;
	//atribuição de string usamos o strcpy(para, de)
	strcpy(p.nomePessoa,"Sergio");
	strcpy(p.morada,"Funchal");
	p.idade = 20;
	/*definição de uma lisa de calores para uma estrutura como se de um array se tratasse */
	/*Se os campos nao iniciadosm sera atribuido 0 se ofr inteiro , se for string atribui vazia.*/
	struct pessoa p1 ={"Maria","Machico",99};
	struct pessoa p2 ={"Ana","Porto Moniz",15};
	printf("%d, %d, %d ", p.idade, p1.idade, p2.idade);

	//Exemplo com copias
	strcpy(p.nomePessoa,p1.nomePessoa);
	strcpy(p.morada, p2.morada);
	
	/*Atribuição de valores unicos*/
	p.idade = p2.idade;
	printf("%d,%d,%d ", p.idade, p1.idade, p2.idade);
	printf("%s,%s,%s ", p.morada, p1.morada, p2.morada);
	/*Em estruturaas, uma vez que os campos são os mesmos e a estrutura tambem, é possivel atribuir todo o "objeto" de forma simpes */
	struct pessoa p4;
	p4 = p1;
	printf("%d,%d,%d", p1.idade, p4.idade, p4.nomePessoa);

}
