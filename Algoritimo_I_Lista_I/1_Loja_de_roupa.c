/*1 - Uma loja de roupa necessita adicionar em seu site um componente que a partir de um total a pagar possibilite ao usuário 
simular parcelas sem juros da compra. A entrada do sistema será o montante final da compra e a quantidade de parcelas. O sistema 
deverá resultar no valor em reais de cada parcela.

Variáveis de entrada: total_a_pagar, qtdade_parc

Processamento:
tam_parc = total_a_pagar / qtdade_parc;

Variáveis de saída:  "Total a pagar: 500" total_a_pagar
					 "Numero de Parcelas: 5" qtdade_parc
					 "Tamanho Parcelas: 100 reais" tam_parc*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float total_a_pagar;
	float qtd_parcela;

	system("clear");

	printf("Digite o valor total da compra: ");
	scanf("%f", &total_a_pagar);

	system("clear");

	printf("Quantidades de parcelas: ");
	scanf("%f", &qtd_parcela);

	system("clear");

	printf("-Valor da compra é de: %.2f\n-Quantidades de parcelas: %.2f\n-Total de cada parcela: %.2f\n\n",total_a_pagar, qtd_parcela, total_a_pagar/qtd_parcela);

	return 0;
}