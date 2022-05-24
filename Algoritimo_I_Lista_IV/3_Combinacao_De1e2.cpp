/*3 - Criar algoritmo que combine os dois exercícios acima.
Coloque os itens como opções de switch case.
	3.1 – Convert dec to bin
	3.2 – Convert Bin to Dec*/
#include <stdio.h>
#include <stdlib.h>

void dec_bin(){				//func para converter de dec para bin
	int numero, resultado, i;

	printf("Digite o numero decimal: ");
	scanf("%d", &numero);

	system("clear");
	for (i= 31; i>= 0; --i){
		resultado= numero>> i;
		if (resultado & 1){
			printf("1");
		}else{
			printf("0");
		}
	}
	printf("\n");
}

void bin_dec(){			//func parar converter de bin para dec
    int total  = 0;
    int potenc = 1;
    int bin;

    printf("Entre com um inteiro (0's e 1's): ");
    scanf("%d", &bin);

    while(bin > 0) {
        total += bin % 10 * potenc;
        bin    = bin / 10;
        potenc = potenc * 2;

        //fprintf(stderr, "");
    }

    printf("%d\n", total);
}

int main (){
	int esc=	0;				//inicializando varialvel com 0  para não pegar valor
								//aleatorio 
	do{
		printf(					//menu
			"Escolha uma opcao:\n"
			"1\t -Converte dec para bin\n"
			"2\t -Converte Bin para dec\n"
			"3\t -Encerre a calculadora\n"
			"R: ");
			scanf("%d", &esc);
			if (esc == 3){
				printf("by\n"); //feedback caso a variavel do do while seja igual ou maior que 3
			}
			switch(esc){
				case 1:
					dec_bin();
					esc= 0; //colocado para não sair do loop apos executar a func
				break;
				case 2:
					bin_dec();
					esc= 0; //colocado para não sair do loop apos executar a func
				break;
				
				default:
					if (esc>= 3){// coloquei apenas para forçar qualquer valor igual ou maior q 3
						esc = 3;  
					}
			}

	}while (esc< 2 ); //verifica se sai ou não do loop


	return 0;
}