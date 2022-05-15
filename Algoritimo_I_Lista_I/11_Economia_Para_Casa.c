/*11 - Faça um algoritmo que auxilie o cliente que irá construir uma 
casa a saber quanto dinheiro ele deverá economizar mensalmente e 
por quanto tempo para ter dinheiro para construir a casa a vista.*/
#include <stdlib.h>
#include <stdio.h>

float Valor_Casa;
float Valor_Economia;

int main (){
	system("clear");
	printf("Digite o valor total da casa: ");
	scanf("%f", &Valor_Casa);

	printf("Quanto pode economizar por mes: ");
	scanf("%f", &Valor_Economia);

	system("clear");
	printf("Economizando: %.0fK Por mes, vai demorar: %.0f Mes para conseguir pagar uma casa de: %.2f$\n", Valor_Economia, Valor_Casa, Valor_Casa/Valor_Economia);

	return 0;
}