#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
int main(){
	setlocale(LC_ALL,"Portuguese");
	int nm,i;
	nm =1 ;
	printf("Introduza valor:");
	scanf("%d",&i);
	if(i == 0){
		printf("Igual!!!\n");
		printf("%d é o nm:\n",nm);
	}else if(i > nm){
		printf("Valor alto de mais.\n");
		printf("%d é  nm:\n", nm);
	}else{
		printf("Valor baixo de mais.\n");
		printf("%d é o nm:\n", nm);
	}
	system("pause");
}
