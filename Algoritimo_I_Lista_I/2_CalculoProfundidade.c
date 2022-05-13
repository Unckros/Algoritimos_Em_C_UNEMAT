/*2 - Uma empresa necessita de um software que consiga calcular a profundidade de um poço artesiano de formato 
cilindrico com 0.5 metro de raio, de acordo com a capacidade de água pretendida pelo cliente.

Volume do cilindro em Litros = pi*r²*profund*1000 

Variáveis de entrada: litros

Processamento:
Litros = pi*r²*profund*1000
=>profund = Litros/(pi*r²*1000)
=>>profund = Litros/(pi*r*r*1000)*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	const int mil=	1000;
	const float pi=	3.14;
	float profundidade;
	float r;
	float litros=	0;

	system("clear");

	printf("Informe o valor de R: ");
	scanf("%f", &r);

	system("clear");

	printf("Informe a profundidade: ");
	scanf("%f", &profundidade);

	system("clear");

//====================================================
	litros= pi*(r*r)*profundidade*mil;
	printf("Volume do cilindro em Litros: \t%.2f\n\n", litros);
//====================================================

	profundidade= litros/(pi*(r*r)*1000);
	printf("profundidade:\t %.2f\n", profundidade);
//====================================================

	return 0;
}
