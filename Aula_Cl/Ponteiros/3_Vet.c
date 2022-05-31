/*Crie um programa que carregue um vetor inteiro com 10 posições. 
Crie um procedimento que modiﬁque o valor de cada posição, atribuindo 
o dobro a cada uma. Ao ﬁnal, imprima o vetor atualizado*/

#include <stdlib.h>
#include <stdio.h>

void dobro(int n, int *numeros){
    int dobrado= 0;

    for (int i= 0; i< n; ++i){
        printf("%d", numeros[i]* 2);
        if (i != 9){
            printf(", ");
        }else{
            printf("\n");
        }
    }
}

int main (){
    int numeros[]= {2, 4, 10, 20, 1, 21, 90, 19, 11, 43};
    int dob;
    system("clear");
    printf("Exibicao dos numeros: \n");
    for (int i= 0; i< 10; ++i){
        printf("%d", numeros[i]);

        if (i != 9){
            printf(", ");
        }else{
            printf("\n");
        }
    }
    printf("Exibicao deles alterados: \n");
    dobro(10, numeros);

    return 0;
}