/*7 - Faça um algoritmo que informe o usuário se o ano inserido é bissexto 
ou não.*/

#include <stdlib.h>
#include <stdio.h>

int main (){
	int ano;
	system("clear");
	printf("Digite o ano: ");
	scanf("%i", &ano);

	system("clear");
	if (((ano% 4== 0) && (ano% 100!= 0)) || (ano% 400== 0)){
		printf("Ano: %d eh bissexto\n", ano);

	}else{
		printf("Ano: %d nao bissexto\n", ano);
	}
	return 1;
}