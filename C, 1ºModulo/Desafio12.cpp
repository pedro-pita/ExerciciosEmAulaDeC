#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int numero;
	printf("Introduza o numero que deseja:\n");
	scanf("%d", &numero);
	if(numero >= 0){
		printf("Este numero é positivo.\n");
		printf("%d ao quadrado é %d. \n", numero, numero * numero);
		printf("Numero sucessor a %d é %d.", numero, numero + 1);
	}else
		printf("Nao podemos fazer nada, %d é negativo.", numero);
}
