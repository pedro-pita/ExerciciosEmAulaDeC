#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	/*ponteiros com arrays*/
int main(){
	//Por conven��o a primeira posi��o do array
	//� o ponteiro do proprio Array
	int a[3]= {1,2,3};
	int *p = a;
	//ciclo for de itera��o do array
	int i;
	for(i=0;i<3;i++){
		printf("Conteudo -> a[%d] = %d\n",i,p[i]);
		//ou
		//printf("Conteudo-> a[%d]=%d\n",i,*(p+i));
	}
	printf("Conteudo -> a[2]%d\n",*(p+2)); //p[2]
	//Endere�os de elementos do array*/
	//pegar o endere�o do Ponteiro e add 2 posi��es
	printf("%d\n",(p+2));
	printf("%d\n",&p[2]);//Endere�o do apontador no 2 referencia
}
