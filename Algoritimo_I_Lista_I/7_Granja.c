/*7 - A granja Frangotech possui um controle automatizado de cada frango da sua produção. 
No pé direito do frango há um anel com um chip de identificação; no pé esquerdo são dois 
anéis para indicar o tipo de alimento que deve consumir. Sabendo que o anel com chip 
custa R$4,00 e o anel de alimento custa R$3,50, faça um algoritmo para calcular o gasto 
total da granja para marcar todos os seus frangos.*/

#include <stdlib.h>
#include <stdio.h>
const float aneis= 4+ 3.50;
int qtd;

int main (){
    system("clear");

    printf("Inclua a quantidade de frangos: ");
    scanf("%d", &qtd);
    printf("\nO valor gasto é de: %.1f.\n", qtd*aneis);

    return 0;
}
