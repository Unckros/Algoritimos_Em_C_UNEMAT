/*5 - Escreva  um programa  para  ler  o  ano  de  nascimento  de  uma  pessoa  e 
escrever uma mensagem que diga se ela poderá ou não votar este ano (não é necessário 
considerar o mês em que ela nasceu).*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h> //Usado para pegar data da maquina executada

int AnoNasceu;

int main (){
	int AnoAtual; // criado para para receber o ano da variavel data_ano
	time_t data_ano; //essa variavel recebe o anno
	time(&data_ano);

	struct tm *data= localtime(&data_ano);
	AnoAtual= (data-> tm_year+ 1900); 

	printf("Digite o Ano em que nasceu: ");
	scanf("%d", &AnoNasceu);

	if (AnoAtual- AnoNasceu < 18){
		printf("Voce ainda nao tem direito a voto\n");

	}else{
		printf("Voce ja pode votar\n"); 	
	}
	return 0;
}
