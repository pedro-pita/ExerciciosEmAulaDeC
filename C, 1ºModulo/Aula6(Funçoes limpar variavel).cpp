#include <locale.h>
#include <stdlib.h>
#define PI 3.14

/*void limpa(float x); //Não acontece kna
int main(){
	float f;
	f = 123.8;
	limpa(f);
	printf("%f", limpa(f););
}

void limpa(float a){
	a=0;
}*/

void limpa(float *x); //* aponta a zona da memoria
int main(){
	float f;
	f = 123.8;
	limpa(&f); 	//passa o valor por referencia
	printf("%f", f);
}

void limpa(float *a){ //* aponta a zona da memoria
	*a=0; //* aponta a zona da memoria
}
