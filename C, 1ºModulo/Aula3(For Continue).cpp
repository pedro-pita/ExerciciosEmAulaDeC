#include <stdio.h>
#include <locale.h> //biblioteca de idiomas
#include <stdlib.h>
int main(){
	/*De cada vez que � um numero impar, a instru��i condicional if � executada porque x%2 � 1, correpondendo ao valor logico verdadeiro. Um numero impar leva assim a execu��o
	do continue que provoca uma nova itera��o do ciclo, passado por cima do printf*/ 
	int x;
	for(x=0;x<100;x++){
		if(x % 2) continue;
		printf("%d \n",x);
	}
}
