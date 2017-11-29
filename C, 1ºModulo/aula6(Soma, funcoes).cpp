#include <locale.h>
#include <stdlib.h>
#define PI 3.14
void soma(float x, int y){
	float result;
	result = x + y;
	printf("A soma de %0.2f + %d é = %0.2f", x, y, result);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int a;
	float b= 25.6;
	soma(b,a);
	soma(b,a);
}
