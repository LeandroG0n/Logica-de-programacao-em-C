#include <stdio.h>
int main(){
	int i = 0, somapar = 0, somaimpar = 0, num = 0, n = 0;
	printf("Adicione o número de componentes da lista:\n");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++){
		printf("Apresente um número inteiro:\n");
		scanf("%d", &n);
		printf("O número é: %d\n", n);
		if(n %2 == 0){
			somapar = somapar + n;
		}
		else{
		somaimpar = somaimpar + n;	
		}
	}
	
	printf("A soma dos números pares é: %d\n", somapar);
	printf("A soma dos números impares é: %d\n", somaimpar);
	return 0;
	
	
	
	
	
	
	
	
}