#include <stdio.h>
#include <stdlib.h>
float aritmendica(float n1,float n2,float n3){
	float r = ((n1+n2+n3)/3);
	return r;
}
float ponderada(float n1,float n2,float n3){
	float r = ((50 * n1)/100) + ((30 * n2)/100)+ ((20 * n3)/100);
	return r;
}
int main(){
	float n1,n2,n3;
	char letra;
	printf("Introduza as notas.");
	scanf("%f %f %f",&n1,&n2,&n3);
	printf("Introduza a letra.");
	scanf("%c",&letra);
	if(letra="M")
		float resultado = aritmedica(n1,n2,n3);
	else
		float resultado = ponderada(n1,n2,n3);
	printf("Resultado:%f", resultado);
}
