/*Exercício 2 - Crie sistema de pedido de pizza com 3 opções de pizzas para serem escolhidas 
e 3 opções de tamanho. De acordo com as opções do usuário, confirme o pedido da pizza, o 
tamanho e preço.

Menu de opções de pizza
1 - Pizza de Calabresa
2 - Pizza 4 Queijos
3 - Pizza Portuguesa

Menu de opções de tamanhos
1 - Pequena - R$ 25,00 
2 - Média - R$ 30,00 
3 - Grande - R$ 35,00
OBS: Esse exercício pode ser resolvido com dois switch case.*/

#include <stdio.h>
#include <stdlib.h>

void imprimeMenu(void){
    printf(
        "Menu de Pizzas UNEMAT\n"
        "1 \t-Calabreza \n"
        "2 \t-Quatro queijos\n"
        "3 \t-Portuguesa \n"
        "R: "
    );
    return;

}
void impValor(void){
    system("clear");
        printf(
        "1 \t-Pequena 25 R$\n"
        "2 \t-Media 30 R$\n"
        "3 \t-Grande 35 R$\n"
        "R: "
        );
    return;
}
int Valor(int v){
        if(v== 1){
            printf("25 R$\n");
        }else if (v== 2){
            printf("30 R$\n");
        }else if (v== 3){
            printf("35 R$\n");
        }else{
            printf("Invalida a opcao\n");
        }
    return v;
}

int main (){
    int pizza, valor;
    system("clear");
    imprimeMenu();
    scanf("%i", &pizza);
    switch (pizza){
        case 1:
            impValor();
            scanf("%i", &valor);
            printf(
                "Voce escolheu Pizza de Calabreza\n"
                "Valor de: "
            );
            Valor(valor);
            
        break;
        case 2:
        impValor();
            scanf("%i", &valor);
            printf(
                "Voce escolheu Pizza de 4 queijo\n"
                "Valor de: "
            );
            Valor(valor);
        break;

         case 3:
        impValor();
            scanf("%i", &valor);
            printf(
                "Voce escolheu Pizza de Portuguesa\n"
                "Valor de: "
            );
            Valor(valor);
        break;
    }
    return 0;
}