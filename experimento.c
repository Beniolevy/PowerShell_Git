	#include <stdio.h> //biblioteca de comunica��o com o usu�rio
	#include <stdlib.h> // biblioteca de aloca��o de espa�o de memoria
	#include <locale.h> //biblioteca de aloca��es de texto por regi�o
	#include <string.h> // biblioteca responsavel por cuidar das strings

int registro() //fun��o responsavel por cadastrar os usuarios do sistema
{
	//inicio cria�ao de variaveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//fim da cra��o de variaveis/string
	
	printf("Digite o CPF: ");	//coletando informa�oes usuario
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //responsavel por copiar o valor das string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); // criando um arquivo
	fprintf(file,cpf); //salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome a ser cadastrado: ");
	scanf("%s",nome);	
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	printf("Digite o sobrenome: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo: ");
	scanf("%s", cargo);

	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	printf("\nDeseja voltar ao menu?\n\n");
	printf("Para voltar ao menu aperte 1\n");
	printf("Para sair aperte 2\n\n");
	
	int menu=0;
	
	scanf ("%d", &menu);
	system ("cls");
	
	if (menu==1)
	{
		printf("\nBem vindo de volta\n\n");
		system ("pause");
		return 0;
	}
		
	int sair=0;
	
	printf("\nAt� logo!\n\n");
	 system ("pause");
	if (sair==2)
	{
		system ("pause");
		exit(sair=2);
	}
	
}

int consulta()

{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi possiviel encontrar o cpf!\n");
	}	

	while(fgets(conteudo,200, file) !=NULL)
	{
		printf("\nEssas s�o suas informa��es de usu�rio:");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	printf("\nDeseja voltar ao menu?\n\n");
	printf("Para voltar ao menu aperte 1\n");
	printf("Para sair aperte 2\n\n");
	
	int menu=0;
	
	scanf ("%d", &menu);
	system ("cls");
	
	if (menu==1)
	{
		printf("\nBem vindo de volta\n\n");
		system ("pause");
		return 0;
	}
		
	int sair=0;
	
	printf("\nAt� logo!\n\n");
	 system ("pause");
	if (sair==2)
	{
		system ("pause");
		exit(sair=2);
	}
}

int deletar()
{
	
	char cpf[40];
	
	printf("Qual cpf deseja deletar?\n");
	scanf ("%s",cpf);
	
	remove(cpf);
	
	FILE*file;
	file = fopen (cpf, "r");
	
	if(file == NULL)
	{
		printf("N�o foi possiviel deletar o cpf!\n\n");
		
	printf("\nDeseja voltar ao menu?\n\n");
	printf("Para voltar ao menu aperte 1\n");
	printf("Para sair aperte 2\n\n");
	
	int menu=0;
	
	scanf ("%d", &menu);
	system ("cls");
	
	if (menu==1)
	{
		printf("\nBem vindo de volta\n\n");
		system ("pause");
		return 0;
	}
		
	int sair=0;
	
	printf("\nAt� logo!\n\n");
	 system ("pause");
	if (sair==2)
	{
		system ("pause");
		exit(sair=2);
	}
	}	
	
}

int main()
	{
	int opcao=0; //Definindo vari�veis
	int x=1;
	
	for(x=1; x=1;)
	{
	
		system("cls");	

	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
		printf("### Bem vindo ###\n\n"); // Inicio do menu
		printf("Escolha a op��o desejada no menu: \n\n"); 
		printf("\t1 - Registrar contas\n"); 
		printf("\t2 - Consultar contas\n"); 
		printf("\t3 - Deletar contas\n\n");
		printf("\t4 - sair do programa\n\n");// fim do menu
		printf("op��o: ");
	
	scanf ("%d", &opcao); //armazendo a esolha do usuario

	system ("cls"); //responsavel por limpar a tela
	
	switch(opcao) //sele�ao menu
	{
		case 1:
		registro();
		break;
		
		case 2:
		consulta();

		break;
		
		case 3:
		deletar();
		break;
		
		case 4:
		printf("Obrigado por usar nosso aplicativo");
		return 0;
		break;
		
		default:
		printf("Op��o n�o disponivel!\n\n"); 
		system ("pause"); 
		break;	 	
	} // fim da sele�ao
}
	}	
