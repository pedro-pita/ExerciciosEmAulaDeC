#include <locale.h>
#include <stdlib.h>
void limpa(float v[],int qt){
	int i;
	for(i=0;i < qt; i++){
		v[i] = 1.0;
	}
}
int main(){
	int i;
	float vetor[10];
	limpa(vetor ,10);
	for(i=0; i < 10; i++){
		printf("vetor[] = %f[]", vetor[i]);
	}
}


