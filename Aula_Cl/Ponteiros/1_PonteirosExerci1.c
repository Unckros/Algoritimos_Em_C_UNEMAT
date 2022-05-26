/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros.
Imprima os valores das variáveis antes e após a modificação, além dos seus respectivos endereços de
memória.*/
#include <stdio.h>

void troca(int *point_a, int *point_b, char *point_c){
    int aux = *point_a;
    *point_a = *point_b;
    *point_b = aux;
    *point_c = 'M';
}

int main(){
    int a= 5, b= 3;
    char c= 'A';

    printf("Valores Iniciais:\n%i\n%i\n%c \n", a, b, c);
    troca(&a,&b,&c);
    printf("Valores trocados:\na= %d\nb= %d\nc= %c\n", a,b,c);

    return 0;
}