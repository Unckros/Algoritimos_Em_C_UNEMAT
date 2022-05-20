/*1 - Criar algoritmo que faça a conversão de número decimal em binário.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	int numero, resultado, i;

	printf("Digite o numero decimal: ");
	scanf("%d", &numero);

	system("clear");
	for (i= 31; i>= 0; --i){
		resultado= numero>> i;

		if (resultado & 1){
			printf("1");
		}else{
			printf("0");
		}
	}
	printf("\n");

	return 0;
}