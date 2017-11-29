#include <stdio.h>
void main(){ //vai esperar que seja introduzido dois numeros
	int x=0; //varivel necessita de utilizar o comercial (&) para referenciar
	char nome[80]; //array nao nessecita ustilizar o comercial (&)
	scanf("%d %s",&x,nome);
	printf("Ola: %d : %s", x, nome);
}
