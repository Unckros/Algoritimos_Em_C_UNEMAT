/*3 - Escreva  um  programa  para  ler  3  valores  (considere  que    não  serão informados valores iguais) e escrever o maior deles.*/
#include <stdlib.h>
#include <stdio.h>

float numeros[3];

int main (){
	for (int i= 0; i< 3; ++i){
		printf("Digite o %d° numero: ",i+1 );
		scanf("%f", &numeros[i]);
	}
	if (numeros[0] == numeros[1] == numeros[2]){
		printf("Os Numeros sao iguais\n");

	}else if (numeros[0]> numeros[1] and numeros[0]> numeros[2]){
		printf("O maior numero eh: %.0f, o primeiro\n", numeros[0]);
	
	}else if(numeros[1]> numeros[0] and numeros[1]> numeros[2]){
		printf("O segundo é maior: %.0f\n", numeros[1]);

	}else{
		printf("O terceiro eh maior: %.0f\n", numeros[2]);
	}

	return 0;
}
