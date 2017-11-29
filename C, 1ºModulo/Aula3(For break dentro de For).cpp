#include <stdio.h>
#include <locale.h> //biblioteca de idiomas
#include <stdlib.h>
int main(){
	//A quebra é executada apenas no ciclo interno em cada quebra volta ao ciclo mais agrangente e executa até acontecer uma quebras
	int t, count;
	for(t=0;t<2;t++){
		count = 1;
		//for em ciclo
		for(;;){
			printf("%d", count);
			count++;
			if(count == 10)
				break;
		}
	}
}

