/*Exercício 4 - Uma máquina possui 7 estados possíveis de funcionamento. A transição de um estado para o outro provoca um comportamento específico. 
Construa um algoritmo que emule o comportamento utilizando como parâmetro o estado atual e o estado futuro de uma transição.

1caso estado_atual = 0 e estado_futuro = 1
	"Maquina ligada e operando com funções mínimas."
	
2caso estado_atual = 1 e estado_futuro = 0
	"Maquina sendo desligada."
	
3caso estado_atual = 1 e estado_futuro = 2
	"Maquina ligada solicita ao gerenciador do sistema autorização para operação com funções completas."
	
4caso estado_atual = 2 e estado_futuro = 1
	"Gerenciador do sistema não autoriza que a máquina opere com funções completas."
	
5caso estado_atual = 2 e estado_futuro = 3
	"Gerenciador do sistema autoriza as funções completas. A máquina deve enviar suas especificações de sensores para o gerenciador."

6caso estado_atual = 3 e estado_futuro = 4
	"A máquina termina de enviar suas especificações para o gerenciador e agora opera com funções completas. Além disso, deve enviar a leitura dos sensores periodicamente para o gerenciador."

7caso estado_atual = 4 e estado_futuro = 5
	"A máquina solicita ao gerenciador do sistema autorização para operação com funções mínimas."

8caso estado_atual = 5 e estado_futuro = 4
	"Gerenciador do sistema não autoriza que a máquina opere com funções mínimas."

9caso estado_atual = 5 e estado_futuro = 1
	"Gerenciador do sistema autoriza as funções mínimas. A máquina deve permanecer ligada e parar de enviar leituras ao gerenciador."

caso default
	"Transição de estado desconhecida."*/

#include <stdio.h>
#include <stdlib.h>

int maquina(int n){

	switch (n){

		case 0:
			printf("Maquina sendo desligada.\n");
		break;

		case 1:
			printf("Maquina sendo desligada. \n");
		break;
		
		case 3:
			printf("Maquina ligada solicita ao gerenciador do sistema autorização para operação com funções completas. \n");
		break;

		case 4:
			printf("Gerenciador do sistema não autoriza que a máquina opere com funções completas. \n");
		break;

		case 5:
			printf("Gerenciador do sistema autoriza as funções completas. A máquina deve enviar suas especificações de sensores para o gerenciador.\n");
		break;

		case 6:
			printf("A máquina termina de enviar suas especificações para o gerenciador e agora opera com funções completas. Além disso, deve enviar a leitura dos sensores periodicamente para o gerenciador.\n");
		break;

		case 7:
			printf("A máquina solicita ao gerenciador do sistema autorização para operação com funções mínimas. \n");
		break;

		case 8:
			printf("Gerenciador do sistema não autoriza que a máquina opere com funções mínimas.\n");
		break;

		case 9:
			printf("Gerenciador do sistema autoriza as funções mínimas. A máquina deve permanecer ligada e parar de enviar leituras ao gerenciador.\n");
		break;
		default:
			printf("Transição de estado desconhecida.\n");


	}
}

int main (){

	int atual, pros, transfere;

	system("clear");

	printf("Informe o estado atual: ");
	scanf("%d", &atual);

	printf("Informe o proximo estado: ");
	scanf("%i", &pros);

	printf("%d", transfere);
	maquina(pros);

	return 0;
}