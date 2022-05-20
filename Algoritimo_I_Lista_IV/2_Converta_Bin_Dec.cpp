/*2 - Criar algoritmo que faça a conversão de número binário em decimal.*/

#include <stdio.h>

int bin_to_dec(int bin){
    int total  = 0;
    int potenc = 1;

    while(bin > 0) {
        total += bin % 10 * potenc;
        bin    = bin / 10;
        potenc = potenc * 2;

        //fprintf(stderr, "");
    }

    return total;
}

int main(void){
    int dec = 0;
    int bin = 0;

    printf("Entre com um inteiro (0's e 1's): ");
    scanf("%d", &bin);

    dec = bin_to_dec(bin);

    printf("Bin = %d - Dec = %d\n", bin, dec);

    return 0;
}