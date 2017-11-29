#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b;
	printf("Introduza o valor das variaveis a e b:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a > b)
		printf("O primeiro numero (%d) é maior do que o segundo numero (%d), e o resto de ambos os numero é %d.",a,b,a-b);
	else if(b > a)
		printf("O segundo numero (%d) é maior do que o primeiro numero (%d), e o resto de ambos os numeros é %d.",b,a,b-a);
	else
		printf("O primeiro numero (%d) e o segundo numero (%d) são iguais, logo o resto de ambos os numeros é 0.",a,b);
}
