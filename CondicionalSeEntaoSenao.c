#include <stdio.h>
int main(){
	int cadastrado, ativo, logado;
	char opcao;
	
	cadastrado = ativo = logado =0;
	
	printf("Deseja cadastrar sua conta? s/n \n");
	scanf("%c , &opcao");
	
	if(opcao == "s"){
		cadastrado = 1;
		printf("\nconta cadastrada.\n");
		}
	
	
	printf("Deseja ativar sua conta? s/n \n");
	scanf("%c , &opcao");

	if(opcao == "s"){
		ativo = 1;
		printf("\nconta ativada.\n");
		}
		
		printf("Deseja logar sua conta? s/n \n");
	scanf("%c , &opcao");

	if(opcao == "s"){
		logado = 1;
		printf("\nconta logada.\n");
		}
		
	if((cadastrado == 1) && ((ativo == 1) && (logado == 1))){
			printf("\nSeja bem Vindo.\n");
		}else{
			printf("\nAlgo deu errado.\n");
		}
}
		
