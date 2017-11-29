/*strcat(para, de). concatena array de carateres*/
int main(){
	char n4[50]= "Eu";
	char n5[50]= "Sérgio";
	
	strcat(n4,n5);
	printf("Nova: %s",n4);
	/* strcmp(para de). verifica se sao iguais 0, diferentes devolve valores diferentes de 0*/
	char n6[40]="Eu";
	char n7[40]="Sergio";
	if(strcmp(n6,n7)==0)
		printf("Iguais");
	else
		printf("Diferente");	
}



