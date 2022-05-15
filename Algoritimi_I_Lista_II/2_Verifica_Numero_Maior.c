/*2 - Escreva  um  programa  para  ler  2  valores  (considere  que    não  
serão informados valores iguais) e escrever o maior deles.*/

float num, num1;
int main (){
	system("clear");
	printf("Digite o 1° numero: ");
	scanf("%f", &num);

	printf("Digite o 2° numero: ");
	scanf("%f", &num1);
	if (num == num1){//Aqui é feito uma veridicação de igualdade mesmo nao pedindo no enunciado
		printf("Numero: %.0f eh igual ao %.0f\n", num, num1);
	}else if(num > num1){
		printf("O primeiro numero: %.0f é maior que o segundo: %.0f.\n", num, num1);
	}else{
		printf("O segundo: %.0f eh maior que o primeiro: %.0f\n",num1, num);
	}
	return 0;
}