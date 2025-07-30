#include <stdio.h>
int main(){
	int i = 0;
	float media = 0, A1 = 0, A2 = 0, A3 = 0, ttlapro = 0, ttlrepro = 0;
	for(int i = 1; i <= 2; i++){
	printf("Digite sua A1:\n");
	scanf("%f", &A1);
	printf("Digite sua A2:\n");
	scanf("%f", &A2);
	printf("Digite sua A3:\n");
	scanf("%f", &A3);
	media = (A1 + A2 + A3)/3;
	if(media>=7){
		ttlapro = ttlapro + 1;
		printf("Aluno aprovado!\n");
	}
	if(media<=6){
		ttlrepro = ttlrepro + 1;
		printf("Aluno reprovado!\n");
	}
	
		
	}
	printf("O total de aprovados foram:%.f\n", ttlapro);
	printf("O total de reprovados foram:%.f\n", ttlrepro);
	return 0;
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
