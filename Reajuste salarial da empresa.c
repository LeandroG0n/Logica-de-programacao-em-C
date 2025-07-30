#include <stdio.h>
int main(){
	int i = 0;
	float reajuste, salarioini = 0, salariofinal = 0, maiorsalario = 0;
	printf("Escreva a porcentagem de reajuste salarial:\n");
	scanf("%f", &reajuste);
	for(int i = 0; i <=4; i++){
		printf("Qual o valor do seu salário atual?\n");
		scanf("%f", &salarioini);
		salariofinal = salarioini + salarioini*(reajuste/100);
		printf("O valor do salarial junto ao reajuste é de: %.f\n", salariofinal);
		
	}
	printf("O maior salario da empresa, é: %.f", salariofinal);
	
	return 0;
	
	
	
	
}