#include <stdio.h>
#include <locale.h> //biblioteca de idiomas
#include <stdlib.h>
int main(){
	int x,y=0;
	x= 12;
	y=3;
	printf("%d \n",x/y); /*4*/
	printf("%d \n",x&y); //1
	
	x=1;
	y=3;
	printf("(x/y)=%d , (x%%y) = %d, x/y, x%y");
	float f = 1.0e-5;
	printf("float->%f", f);
}
