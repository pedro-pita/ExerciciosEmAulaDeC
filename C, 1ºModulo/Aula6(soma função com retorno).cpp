#include <locale.h>
#include <stdlib.h>
int soma(int a, int b){
	return a+b;
}
int main(){
	int n1,n2, r;
	printf("Insira dois valores inteiros :\n");
	scanf("%d %d", &n1, &n2);
	r= soma(n1, n2);
	printf("Resultado: %d\n", r);
}
