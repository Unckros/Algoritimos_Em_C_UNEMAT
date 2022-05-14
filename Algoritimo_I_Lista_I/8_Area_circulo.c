/*8 - Faça um algoritmo que calcule a área de um círculo.
A = r² . pi*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float raio;
    const float pi= 3.1415926535898;

    system("clear");

    printf("Digite o raio: ");
    scanf("%f", &raio);

    printf("A area eh: %.1f.\n", (raio*raio)*pi);

    return 0;
}