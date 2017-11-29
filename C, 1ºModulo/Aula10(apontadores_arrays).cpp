#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	/*ponteiros com arrays*/
int main(){
	//Por convenção a primeira posição do array
	//é o ponteiro do proprio Array
	int a[3]= {1,2,3};
	int *p = a;
	//ciclo for de iteração do array
	int i;
	for(i=0;i<3;i++){
		printf("Conteudo -> a[%d] = %d\n",i,p[i]);
		//ou
		//printf("Conteudo-> a[%d]=%d\n",i,*(p+i));
	}
	printf("Conteudo -> a[2]%d\n",*(p+2)); //p[2]
	//Endereços de elementos do array*/
	//pegar o endereço do Ponteiro e add 2 posições
	printf("%d\n",(p+2));
	printf("%d\n",&p[2]);//Endereço do apontador no 2 referencia
}
