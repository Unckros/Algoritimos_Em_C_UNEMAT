/*10 - Faça um algoritmo que calcule qual é o valor em reais de um muro de 2 metros de altura que 
será construído em volta de um terreno retangular. Cada metro quadrado de concreto custa 120 reais.*/
#include <stdio.h>
#include <stdlib.h>

const int ValorMetro=	120;
const int AltMuro=		2;
float TamTerreno;
float tamanho_total;

int main (){
	system("clear");
	printf("Digite o Tamanho quadrado do terreno: ");
	scanf("%f", &TamTerreno);

	tamanho_total= TamTerreno*AltMuro;
	printf("Tamanho do muro em metros quadrado eh de: %.1fm², e tera um custo de: %.1f$\n", tamanho_total, tamanho_total*120);
	
	return 0;
}