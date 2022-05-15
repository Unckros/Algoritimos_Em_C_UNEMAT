/*14 - Faça um algoritmo que calcule a média de 3 números.*/
#include <stdio.h>
#include <stdlib.h>

float temp, acumula=	0;
int num;


int main (){
	system("clear");
	printf("Digite a quantidade de numero a se tirar média: ");
	scanf("%d", &num);

	for (int i= 0; i<num; ++i){//Alg ta pedindo de apenas 3, mas assim o usuario escolhe quantos quiser
		printf("Digite o %d° numero: ", i+1);
		scanf("%f", &temp);
		acumula += temp;
	}
	
	printf("A media dos: %d numeros é de: %.2f\n", num, acumula/num);

	return 0;
}