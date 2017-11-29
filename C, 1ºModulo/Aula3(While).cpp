
#include <stdio.h>
#include <stdlib.h>
 int main(){
// Ciclo que espera pela introdução do carater
	char c;
	// uma string termina no primeiro carater nulo = todo bits 0, ou terminador, ou "\0"
	c='\0';
	while(c != 'A'){
		scanf("%c",&c);
		printf("EStou dentro do while");
	}
	//while(1){} Ciclo inficnito no while
}
