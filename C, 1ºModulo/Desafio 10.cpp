#include <stdio.h>
#include <locale.h> //biblioteca de idiomas
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b;
	printf("Introduza o valor das variaveis a e b:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	if(!(a%b))
		printf("a � multipo de b\n");
	else
		printf("a nao � multipo de b\n");
	
	if(!(b%a))
		printf("b � multiplo de a\n");
	else
		printf("b n�o � multiplo de a\n");	
}
