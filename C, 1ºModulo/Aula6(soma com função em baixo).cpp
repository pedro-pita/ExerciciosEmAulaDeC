#include <locale.h>
#include <stdlib.h>
#define PI 3.14
void soma(float x, int y);
int main(){
	setlocale(LC_ALL,"Portuguese");
	soma(14.5,5);
}

void soma(float x, int y){
	float result;
	result = x + y;
	printf("A soma de %0.2f + %d = %0.2f", x, y, result);
}
