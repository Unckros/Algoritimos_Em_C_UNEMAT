/*15 - Faça um algoritmo que converta km/h em m/s.*/

/*
O fator de conversão utilizado é o 3,6 em virtude 
das correspondências entre as unidades de medida 
de espaço e tempo, sendo 1 km = 1000 m e 1 h = 3600 s. 
Veja o exemplo da transformação de 72 km/h para m/s.
*/
#include <stdio.h>
#include <stdlib.h>

const float KMemMetro=	1000;
const float HoraEmSec=	3600;
float velocidade, mSec;

int main(){

	printf("Digite o KM: ");
	scanf("%f", &velocidade);

	mSec=	velocidade* (KMemMetro/HoraEmSec);
	printf("\nA velocidade de %.2fKM/h eh igual a: %.2fMs\n",velocidade, mSec);
	return 0;
}