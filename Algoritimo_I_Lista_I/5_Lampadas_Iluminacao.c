/*5 - Escreva um programa para calcular e imprimir o número 
de lâmpadas necessárias para iluminar um determinado cômodo 
de uma residência. Dados de entrada: a potência da lâmpada 
utilizada (em watts), as dimensões (largura e comprimento, 
em metros) do cômodo. Considere que a potência necessária é 
de 18 watts por metro quadrado.*/

#include <stdlib.h>
#include <stdlib.h>
float mentroq;
const int wtt= 18;
int main (void){
    system("clear");

    printf("Informe o tamanho do comodo em m²: ");
    scanf("%f", &mentroq);

    system("clear");

    printf("Precisara de %.1f watts para iluminar um comodo de: %.1f\n", mentroq*wtt, mentroq);
    return 0;
}