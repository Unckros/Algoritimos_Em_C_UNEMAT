/*3 - Um banco necessita de um software que auxilie ao cliente que gostaria de emprestrar dinheiro 
poça prever o montante final a ser pago aplicando juros simples cujo a taxa também é variável.
Ex: Se o cliente emprestar 10 mil reais ao um juros de 5%, ele deverá pagar 10500 ao banco.

Variáveis de entrada: montante_inicial, juros

Processamento:
opção 1
mont_juros = montante_inicial * (juros/100)
mont_final = montante_inicial + mont_juros
opção 2
mont_final = montante_inicial + (montante_inicial * (juros/100))

Variáveis de saída: "Montante Final: " mont_final*/

#include <stdio.h>

int main (){
	float emprestimo= 5000;
	const float juros=	5;
	float mont_final;


	printf("Valor do emprestimo, lembrando que havera 5 porcento de juros: ");
	scanf("%f", &emprestimo);

	mont_final= emprestimo+ (emprestimo* (juros/100));
	printf("\nO valor total a ser pago eh de: %.2f \n", mont_final);

	return 0;
}