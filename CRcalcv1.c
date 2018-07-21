#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Criar novo banco de dados de CR
		//Fazer Simulação
		//Adicionar mais matérias

//Carregar novo banco de Dados de CR já existente
		//Fazer Simulação
		//Adicionar novas matérias
		//Mostrar Resumo das matérias
		//após carregado e calculado um CR mostrar  nome e CR atual na tela sempre
	
void existingData(char dataName[]);
//void newData();


int main(){
	
	int option = 0;

	printf("\t\t\tCR Manager\t\t\t\n\n");
	printf("\t1 - Criar novo banco de dados de CR\n");
	printf("\t2 - Carregar banco de dados já existente\n");
	printf("\t3 - Sair\n\n");
	printf("\tDigite a opção desejada:\n\n");
	scanf("%d", &option);
	getchar();

	if(option == 1){

		//	newData();

	}else if(option == 2){	
		int sizeWord;
		sizeWord = 200;
		char dataName[sizeWord];
		system("tput reset");
		printf("\t\t\tCR Manager\t\t\t\n\n");
		printf("Digite o nome do arquivo do banco de dados:");
		fgets(dataName, sizeWord, stdin);//fazer com for		
		existingData(dataName);

	}else if(option == 3){
		return 0;
	}else{

		system("tput reset");
		printf("Opção inexistente!\n\n");
		main();		
	}

	return 0;

}


void existingData(char dataName[]){

	FILE *dataArchive;
	dataArchive = fopen(dataName, "r+");
	
	if(dataArchive == NULL){
		printf("Banco de dados não encontrado\n");
		printf("Pressione qualquer tecla para voltar"); 
		getchar();
		system("tput reset");
		main();
		return;
	}

	system("tput reset");
	//carregar vetor de structs.
	int option = 0;
	printf("\t\t\tCR Manager\t\t\t\n\n");
	printf("\t1 - Adicionar mais matérias\n");
	printf("\t2 - Fazer simulação\n");
	printf("\t3 - Mostrar disciplinas cursadas\n");
	printf("\t4 - Voltar\n\n");
	printf("\t5 - Sair\n\n");
	printf("\tDigite a opção desejada:\n\n");
	scanf("%d", &option);
	getchar();



	





}

