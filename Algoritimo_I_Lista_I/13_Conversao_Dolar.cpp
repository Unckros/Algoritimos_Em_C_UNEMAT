/*13 - Faça um algoritmo que converta dólares em reais. Considere a taxa de câmbio variável.*/

#include <stdio.h>
#include <stdlib.h>

float taxa;
float reais;

int main(){

	printf("Qual a taxa atual: ");
	scanf("%f", &taxa);

	printf("Valor a ser convertido: ");
	scanf("%f", &reais);

	printf("Voce tera %.2f$ com %.2f reais\n", reais/taxa, reais);

	return 0;
}