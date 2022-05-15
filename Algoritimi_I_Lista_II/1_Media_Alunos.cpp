	/*1 - Faça um algoritmo que analise a média de 3 notas de um aluno e sua 
	frequência avalie se ele está aprovado ou reprovado. A média da disciplina 
	é 6 e frequência mínima 70%.*/

	#include <stdlib.h>
	#include <stdio.h>

	float media [3], presenca[3];
	int apr []= {0,0,0}, freq[]= {0,0,0};

	int main (){
		system("clear");
		for (int i= 0; i< 3; ++i){
			printf("\nDigite a media do aluno %d: ", i+1);
			scanf("%f", &media[i]);
			
			printf("\nDigite a frequencia do aluno %d: ", i+1);
			scanf("%f", &presenca[i]);
		}
		system("clear");
		for (int i= 0; i< 3; i++){
			if (media[i]< 6){
				apr[i] +=1;	
			}else{
				apr[i]= 0;
			}
			if (presenca[i]< 70){
				freq[i]+= 1;
			}else{
				freq[i]= 0;
			}
			if (apr[i] == 0 and freq[i]== 0){
				printf("%d Aluno Aprovado\n", i+1);
			}else{
				printf("%d Aluno reprovado\n", i+1);
			}
		}

		return 0;	
	}
