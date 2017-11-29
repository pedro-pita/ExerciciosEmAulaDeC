#include <stdio.h>
#include <locale.h> //biblioteca de idiomas
#include <stdlib.h>
int main(){
	char ch;
	printf("Introduza carater:");
	scanf("%c",&ch);
	
	switch(ch){
		case 'a': printf("valor: %d", ch);break; 
		case 'b': printf("valor: %d", ch);break;
		case 'C': printf("valor: %d", ch);break;
		default: printf("Outro valor");break;
	}
}
