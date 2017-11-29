#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float nota1,nota2,nota3;
	printf("Introduza o valor das notas:\n");
	scanf("%f",&nota1);
	scanf("%f",&nota2);
	scanf("%f",&nota3);
	
	float media = ((20 * nota1)/100) + ((20 * nota2)/100)+ ((60 * nota3)/100);
	
	if(media >= 95)
		printf("Voçe esta aprovado com uma media de %0.2f.", media);
	else
		printf("Voçe esta reprovado com uma media de %0.2f.", media);
}
