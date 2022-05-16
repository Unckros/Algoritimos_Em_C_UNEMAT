/*1 - Crie um algoritmo com a ferramenta switch case que possibilite ao usuário fazer umas das operações lógicas AND, OR, XOR, NAND, NOR.

1 - AND
2 - NAND
3 - OR
4 - NOR
5 - XOR

Objetivo: criar um menu de opcoes que possibilite o cliente a fazer as 5 operações lógicas básicas (AND, NAND, OR, NOR, XOR).


Variáveis de Entrada
opcao-inteiro
numero1-inteiro
numero2-inteiro

Variáveis de Saída
resultado-inteiro

Algoritmo

passo 1- digite a opcao de acordo com o menu
passo 2- leia a variavel opcao
passo 3- digite dois numeros binários (0 ou 1)
passo 4- leia num1 e num2
passo 5- caso opcao = 1 entao resultado=num1 and num2
passo 6- caso opcao = 2 entao resultado=num1 nand num2
passo 7- caso opcao = 3 entao resultado=num1 or num2
passo 8- caso opcao = 4 entao resultado=num1 nor num2
passo 8- caso opcao = 5 entao resultado=num1 xor num2
passo 9- caso qualquer outro entao "opcao invalida"
passo 10- imprima resultado */

#include <stdlib.h>
#include <stdio.h>

int main (){
	int num1=	0, num2=	0, resultado, esc;
	system("clear");

	printf("Digite o primeiro numero 0 ou 1: ");
	scanf("%d", &num1);

	printf("Digite o segundo numero 0 ou 1: ");
	scanf("%d", &num2);
	system("clear");

	printf(
		"\n=========================================================\n"
		"1 \t-num1 and num2\n"
		"2 \t-num1 nand num2\n"
		"3 \t-num1 or num2\n"
		"4 \t-num1 nor num2\n"
		"5 \t-num1 xor num2"
		"\n=========================================================\n"
		"R:"
		);
	scanf("%i", &esc);



	switch (esc){
		case 1:
			if (num1== num2){
				resultado=	1;
				printf("%i \n", resultado);
			}else{
				resultado=	0;
				printf("%i \n", resultado);
			}
			
		break;

		case 2:
			if ((num1=! 1) and (num2=! 1)){
				resultado=	1;
				printf("%i \n", resultado);
			}else{
				resultado=	0;
				printf("%i \n", resultado);
			}

		break;

		case 3:
			if (num1 or num2 == 1){
				resultado= 1;
				printf("%i \n", resultado);
			}else{
				resultado= 0;
				printf("%i \n", resultado);
			}
	
		break;

		case 4:
			if (num1== 0 and num2== 0){
				resultado= 1;
				printf("%i \n", resultado);
			}else{
				resultado= 0;
				printf("%i \n", resultado);
			}

		break;

		case 5:
			if (num1== 0 and num2== 0){
				resultado= 0;
				printf("%i \n", resultado);
			}else if (num1 and num2== 1){
				resultado= 0;
				printf("%i \n", resultado);
			}else{
				resultado= 1;
				printf("%i \n", resultado);
			}

		break;

		default:
			printf("Opção invalida\n");
		break;

	}

	return 0;
}