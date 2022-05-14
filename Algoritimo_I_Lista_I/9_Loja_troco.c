/*9 - Uma loja necessita de um sistema que calcule o troco do pagamento das compras do cliente. 
O sistema deverá receber o total a pagar e o pagamento realizado pelo cliente para retornar o troco.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float total;
    float rec;
    system("clear");

    printf("Digite o valor da compra: ");
    scanf("%f", &total);

    printf("OValor recebido do cliente: ");
    scanf("%d", &rec);
    system("clear");
    
    printf("Troco a voltar ao cliente é de: %.1f.\n", total - rec); // Não tem condicional caso receba menos que a compra
    
    return 0;
}