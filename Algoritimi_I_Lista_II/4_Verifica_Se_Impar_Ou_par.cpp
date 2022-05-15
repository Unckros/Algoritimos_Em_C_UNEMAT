/*4 - Escreva  um  programa  diga se um número é par ou ímpar.*/
#include <stdlib.h>
#include <stdio.h>

int num;

int main (){
	system("clear");

	printf("Digite um numero para verificacao: ");
	scanf("%i", &num);

	system("clear");
	
	if (num % 2 == 0){
		printf("Numero %i eh par!\n", num);

	}else{
		printf("Numero %i eh impar\n", num);
	}
	return 0;
}