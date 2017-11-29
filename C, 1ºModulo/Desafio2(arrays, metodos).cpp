#include <stdio.h>
#include <stdlib.h>
int verificarPosNeg(int numero){
	int verificacao;
	if(numero>=0)
		verificacao = 1;
	else
		verificacao = 0;
	return verificacao;
}
int main(){
	int numero;
	scanf("%d",&numero);
	int resultado = verificarPosNeg(numero);
	printf("%d", resultado);
}
