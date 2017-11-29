#include <stdio.h>
#include <locale.h> //biblioteca de idiomas
#include <stdlib.h>
int main(){
	int x;
	for(x=1;x<=20;x++){
		printf("%d\t", x);
	}
	int y;
	for(y=1;y<=20;y++){
		printf("%d\t", y);
	}
	int z;
	z=0;
	while(z <= 20){
		printf("%d\t",z);
		z++;
	}
	int s;
	s=0;
	while(s <= 20){
		printf("%d\t",s);
		s++;
	}
	int p;
	for(p=1;p<=100;p=p+5){ //incrementa de 5 em 5
		printf("%d\t", y);
	}
}
