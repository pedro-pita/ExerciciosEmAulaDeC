#include <locale.h>
#include <stdlib.h>
#define PI 3.14

void soma(float x, int y);
int main(){
	setlocale(LC_ALL,"Portuguese");
	float n =(12.8);
	/* A função espera um float, int no entanto passo um int, float. Sera feito cost de int para float no primeiro parameto. No segundo parametro de float para int.
	som((float)14,(int)n);
	vão entrar os calores (14.0,12); */
	soma(14,n);
}

void soma(float x, int y){
	printf("Asoma de %0.2f + %d = %.2f", x ,y ,x +y);
}
