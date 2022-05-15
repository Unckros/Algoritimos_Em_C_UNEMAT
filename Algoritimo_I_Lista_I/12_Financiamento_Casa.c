/*12 - Faça um algoritmo que auxilie o cliente que irá financiar uma casa a 
saber o montante final a ser pago. Para isso, considere uma taxa de juros 
de 5% ao ano, 40% de entrada, e com duas possibilidades de parcelamento: 6
anos ou 7 anos.*/
#include <stdlib.h>
#include <stdlib.h>

const int JurosAno=		5;
const int Entrada =		40;
float ValorCasa;
float porcent;

int main (){
	system("clear");
	printf("Digite o Valor da casa a se financiar: ");
	scanf("%f", &ValorCasa);

	porcent=	(ValorCasa/100)* 40; //A linha a baixo num segue bem o Clean Code mas é apenas para não criar mais 2 variaveis	
	printf("Para financiar uma casa de: %.2f\nEntrada: %.2fEm 6 anos fica um total de: %.2f\nEm 6 anos um total de: %.2f\n", ValorCasa, porcent, (ValorCasa/100)*6+ValorCasa, (ValorCasa/100)*7+ValorCasa);

	return 0;
}