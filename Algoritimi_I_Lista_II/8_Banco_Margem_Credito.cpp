/*8 - Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. 
Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela 
abaixo. Mostre uma mensagem informando o saldo médio e o valor do crédito.

Saldo Médio       Percentual
Menor que 200     Nenhum Crédito
de 201 a 400      20% do valor saldo médio
de 401 a 600      30% do valor saldo médio
acima de 601      40% do valor saldo médio*/

#include <stdio.h>
#include <stdlib.h>

float percentual;
float margem;

int main (){

   system("clear");
   printf("Digite a media de credito de seu ano: ");
   scanf("%f", &margem);
   system("clear");

   if (margem<= 200){
      printf("Voce não tem movimentacao suficiente para ter credito em emprestimo\n");

   }else if (margem>200 and margem < 400){
      percentual=    (margem/ 100)* 20;
      printf("Voce tem: %.2f para emprestimo\n", percentual);

   }else if (margem> 400 and margem< 600){
      percentual=    (margem/ 100)* 30;
      printf("Voce tem: %.2f para emprestimo\n", percentual);

   }else {
      percentual=    (margem/ 100)* 40;
      printf("Voce tem: %.2f para emprestimo\n", percentual);

   }

   return 0;
}