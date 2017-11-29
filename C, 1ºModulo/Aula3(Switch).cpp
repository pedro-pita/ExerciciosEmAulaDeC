#include <stdio.h>
#include <locale.h> //biblioteca de idiomas
#include <stdlib.h>
int main(){
	int i;
	printf("Introduza o valor:\n");
	scanf("%d",&i);
	
	switch(i){
		case 0: 
			printf("valor: 0\n");
			break;
			
		case 1: 
			printf("valor: 1\n");
			break;
		
		case 2: 
			printf("valor: 2\n");
			break;
			
		case 3: 
			printf("valor: 3\n");
			break;
			
		default: 
			printf("Outro Valor\n"); 
			break;
	}
	int j;
	printf("Introduza o valor:\n");
	scanf("%d",&j);
	if(j == 0){
		printf("valor: 0");
	}else if(j == 1){
		printf("valor: 1");
	}else if(j == 1){
		printf("valor: 2");
	}else if(j == 1){
		printf("valor: 3");
	}else{
		printf("Outro Valor");
	}
}
