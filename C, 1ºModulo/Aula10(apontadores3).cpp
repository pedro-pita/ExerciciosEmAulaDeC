#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
void *pg;
int *p, p1=24;
p = &p1; //Endere�o de int
pg=&p1;
printf("pg = %d\n",pg);//int de zona de memoria
printf("pg = %p\n",pg); //ponteiro de zona de memoria
//Endere�o de int*(apontador de int), isto �, void* aponta para int* 
pg=&p;
printf("pg = %p\n",pg);
/*Com ponteiro genericos necessitamos converter os tipos, isto �, sendo um ponteiro generico nao sabemos quanto espa�o esta a ser armazenado*/
void *pp;
int p2=123;
pp = &p2;
printf("Conteudo = %d\n",*(int*)pp);
}
