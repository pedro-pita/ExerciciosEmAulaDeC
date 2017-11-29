#include <stdio.h>
int main(){
	float salario;
	printf("Introduza o valor do salario que ira receber o aumento:\n");
		scanf("%f",&salario);
	printf("Salario Aumentado Para: %0.2f", (float)salario + (salario * 25 / 100));
}
