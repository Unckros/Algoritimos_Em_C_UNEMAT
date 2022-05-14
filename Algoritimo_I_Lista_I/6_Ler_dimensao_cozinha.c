/*6 - Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento, largura e altura), 
calcular e escrever a quantidade de caixas de azulejos para se colocar em todas as suas paredes (considere 
que não será descontada a área ocupada por portas e janelas). Cada caixa de azulejos possui 1,5 m².*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    
    float alt;
    float comp;
    float base;
    float calc;

    system("clear");
    printf("Digite a altura: ");
    scanf("%f", &alt);

    printf("Digite o comprimento: ");
    scanf("%f", &comp);

    printf("Digite a base: ");
    scanf("%f", &base);

    calc=   (alt*alt)+ (comp*comp)+ (base*base);
    printf("\nSerá necessario %.1f caixas de azulejos\n", calc/1.5);

    return 0;
}
