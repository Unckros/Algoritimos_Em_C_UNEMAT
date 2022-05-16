/*9 - De acordo com a Receita Federal, para cada faixa salarial acima de R$ 1787,77 mensal, paga-se 
uma porcentagem referente ao imposto de renda. Confira a Tabela Progressiva para o cálculo mensal do 
imposto sobre a renda da pessoa física a partir do exercício de 2015, ano-calendário de 2014:

Base de Cálculo mensal em R$		Aliquota %
até 1787,77							isento
de 1787,78 até 2679,29				7,5  x
de 2679,30 até 3572,43				15,0 x
de 3572,44 até 4463,81				22,5 x
acima de 4463,82					27,5
*/

#include <stdio.h>
#include <stdlib.h>


float salario;
float percentual;

int main (){
	system("clear");
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	system("clear");

	if (salario<= 1787.77){
		printf("Insento\n");

	}else if (salario> 1787.78 and 2679.29){
		percentual= 	(salario/ 100)* 7.5;
		printf("Voce vai pagar: %.2f. \n", percentual);

	}else if (salario> 2679.30 and 3572.43){
		percentual= 	(salario/ 100)* 15;
		printf("Voce vai pagar: %.2f. \n", percentual);

	}else if (salario> 3572.44 and 4463.81){
		percentual= 	(salario/ 100)* 22.5;
		printf("Voce vai pagar: %.2f. \n", percentual);

	}else{
		percentual= 	(salario/ 100)* 27.5;
		printf("Voce vai pagar: %.2f. \n", percentual);

	}

	return 0;
}



