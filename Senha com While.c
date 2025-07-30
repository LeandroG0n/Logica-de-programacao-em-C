#include <stdio.h>
int main(){
	int i, senha, senhazero = 0;
	senha = 1234;
	printf("Digite sua senha\n");
	scanf("%d", &senhazero);
	
	while(senha != senhazero){
		
		printf("Senha incorreta.\n");
		printf("Digite a senha novamente:\n");
		scanf("%d", &senhazero);

	}	
	if(senha == senhazero){
		printf("Senha correta!");
		return 0;
	}	 
	
	return 0;
}
		
	
	

	
	
	
	
	
