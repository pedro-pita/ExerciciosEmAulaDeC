#include <stdio.h>
#include <locale.h> //biblioteca de idiomas
#include <stdlib.h>
int main(){
	/*De cada vez que é um numero impar, a instruçãi condicional if é executada porque x%2 é 1, correpondendo ao valor logico verdadeiro. Um numero impar leva assim a execução
	do continue que provoca uma nova iteração do ciclo, passado por cima do printf*/ 
	int x;
	for(x=0;x<100;x++){
		if(x % 2) continue;
		printf("%d \n",x);
	}
}
