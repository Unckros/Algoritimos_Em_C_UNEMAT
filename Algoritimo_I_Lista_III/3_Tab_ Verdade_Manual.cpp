/*Exercício 3 - Crie um sistema de efetue manualmente todas as relações de portões lógicos (AND, NAND, OR, NOR, XOR) aplicados a dois sinais binários (inteiros 0 ou 1) inseridos pelo usuário. Imprima os valores dos portões.
Entrada de sinais sin_a e sin_b
caso sin_a = 0 e sin_b = 0
	port_and = 0;
	port_nand = not port_and;
	port_or = 0;
	port_nor = not port_or;
	port_xor = 0;
	
caso sin_a = 0 e sin_b = 1
	port_and = 0;
	port_nand = not port_and;
	port_or = 1;
	port_nor = not port_or;
	port_xor = 1;

caso sin_a = 1 e sin_b = 0
	port_and = 0;
	port_nand = not port_and;
	port_or = 1;
	port_nor = not port_or;
	port_xor = 1;

caso sin_a = 1 e sin_b = 1
	port_and = 1;
	port_nand = not port_and;
	port_or = 1;
	port_nor = not port_or;
	port_xor = 0;

OBS: Esse exercício pode ser resolvido com switch case ou if else. De preferência resolva das duas formas.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int sin_a, sin_b;
    system("clear");
    printf("Digite 1 ou 0: ");
    scanf("%i", &sin_a);

    printf("Digite 1 ou 0: ");
    scanf("%i", &sin_b);

    if (sin_a== 0 and sin_b== 0){
        printf(
            "port_and = 0\n"
            "port_nand = not port_and\n"
            "port_or = 0\n"
            "port_nor = not port_or\n"
            "port_xor = 0\n"
        );

    }else if(sin_a== 0 and sin_b== 1){
        printf(
            "port_and = 0\n"
	        "port_nand = not port_and\n"
	        "port_or = 1\n"
	        "port_nor = not port_or\n"
	        "port_xor = 1\n"
        );

    }else if (sin_a== 1 and sin_b== 0){
        printf(
            "port_and = 0\n"
	        "port_nand = not port_and\n"
	        "port_or = 1\n"
	        "port_nor = not port_or\n"
	        "port_xor = 1\n"
        );

    }else if (sin_a== 1 and sin_b== 1){
        printf(
            "port_and = 1\n"
	        "port_nand = not port_and\n"
	        "port_or = 1\n"
	        "port_nor = not port_or\n"
	        "port_xor = 0\n"

        );
    }else {
        printf("Opcao invalida\n\n");
    }

    return 0;
}