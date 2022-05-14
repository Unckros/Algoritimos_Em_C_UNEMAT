/*4 -	Uma escada rolante de 6m de comprimento liga dois andares de uma loja e 
tem inclinação de 30°. Determine, em metros, a altura entre esses dois andares. 
Dados sen30°= 0,5 ; cos30°=0.87 ; tg30° = 0,58

Variáveis de entrada: comp_escada

Processamento:
cat_op = hip * sen30

Variáveis de saída: "A altura dos andares em metros é" cat_op*/

#include <stdio.h>
#include <stdlib.h>

float comprimento;
float cat_op;

int main (){

    system("clear");

    printf("Informe o comprimento da escada: ");
    scanf("%f", &comprimento);
    system("clear");

    cat_op= comprimento/2;
    printf("Comprimento é de: %.2f\n", cat_op);
    return 0;
}