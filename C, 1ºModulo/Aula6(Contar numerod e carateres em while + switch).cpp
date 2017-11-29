#include <locale.h>
#include <stdlib.h>
main(){
	int naA = 0, nzZ = 0, nB=0, nOutros = 0;
	while((c = getcher()) != '.'){
		switch (c){
			case 'a':
			case 'A': =+naA;break;
			case 'z':
			case 'Z': =+nzZ;break;
			case 'B': =+nB;break;
			default =+ nOutros;
		}
	}
	printf("\a A\t Z\t B\t 0\n");
	printf("\n %d\t %d\t %d \t%d\n", naA, nzZ, nB, nOutros);
}
