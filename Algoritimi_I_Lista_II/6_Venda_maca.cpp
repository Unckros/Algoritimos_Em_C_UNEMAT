/*6 - As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia,  
e  R$  0,25  se  forem compradas  pelo  menos  doze.  Escreva  um programa  
que  leia  o  número  de  maçãs  compradas,  calcule  e  escreva  o valor 
total da compra.*/
#include <stdio.h>
#include <stdlib.h>

float qtd;
int main (){
	system("clear");

	printf("Digite quantas macas deseja comprar: ");
	scanf("%f", &qtd);

	if (qtd < 12){
		printf("Vai te custar %.2f, %.0f macas\n", qtd* 0.30, qtd);
	}else{
		printf("Vai te custar %.2f, %.0f macas\n", qtd*0.25, qtd);
	}
	return 0;
}