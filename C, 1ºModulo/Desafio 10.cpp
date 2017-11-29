#include <stdio.h>
#include <locale.h> //biblioteca de idiomas
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b;
	printf("Introduza o valor das variaveis a e b:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	if(!(a%b))
		printf("a é multipo de b\n");
	else
		printf("a nao é multipo de b\n");
	
	if(!(b%a))
		printf("b é multiplo de a\n");
	else
		printf("b não é multiplo de a\n");	
}
