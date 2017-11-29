#include <stdio.h>
#include <stdlib.h>
int i,j;
int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Introduza dois numeros\n");
	scanf("%d %d", &i,&j);
	system("pause");
	printf("%d == %d é %d\n",i,j,i==j);
	printf("%d != %d é %d\n",i,j,i!=j);
	printf("%d <= %d é %d\n",i,j,i<=j);
	printf("%d >= %d é %d\n",i,j,i>=j);
	printf("%d > %d é %d\n",i,j,i>j);
	printf("%d < %d é %d\n",i,j,i<j);
}


