/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida, faça uma função que retorne a
soma do dobro dos dois números lidos. A função deverá armazenar o dobro de A na própria variável A e o
dobro de B na própria variável B.*/

#include <stdio.h>

void dobra(int a, int b){
    printf("Numeros dobrados: %d, %d\n", a*2, b*2);
}

int main() {
    int nu1, nu2;
    printf("Informe um numero: ");
    scanf("%d", &nu1);
    printf("Informe outro numero:");
    scanf("%d", &nu2);
    
    printf("Numeros são: %d, %d\n", nu1, nu2);
    dobra(nu1, nu2);
    return 0;
}