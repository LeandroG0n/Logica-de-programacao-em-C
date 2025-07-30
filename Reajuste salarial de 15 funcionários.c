#include <stdio.h>
int main(){
	float si = 0, sf = 0;
	int i, imposto = 0;
	for (int i = 1; i<=15; i++){
		printf("Apresente seu salário inicial:\n");
		scanf("%f", &si);
		printf("Seu salario inicial é: %.f\n", si);
		
		
	if (si <= 999){
		sf = si - (si/10);
	}
	elseif(si <= 1999){
		sf = si - (si/15);
	}
	elseif (si<=9999){
		sf = si - (si/20);
	}
	elseif (si<=99999){
		sf = si - (si/25);
	}
	elseif(si>100000){
		sf = si - (si/30);
	}
	printf("Seu salário final é:%.f\n", sf);
}
 return 0;	
}