#include <stdio.h>

int main() {

struct filmes {

	char nome[40];
	int anoDeProducao;
	char atorPrincipal[40];

	struct MaisNovo *filmes;

} FilmeA, FilmeB, FilmeC, *MaisNovo;
	
	int comando = 0;
	int esperaComando = 1;
	int alunoNumero = 0;
	int ligado = 1;
	
	do
	{
		printf("Menu:\n1. cadastre Filme A\n2. cadastre Filme B\n3. cadastre Filme C\n4. mais novo\n");
		do
		{
            scanf(" %d", &comando);
            esperaComando = 0;
        }
		while(esperaComando);

		switch(comando)
		{
			
			case 1: 
				printf("Registre filme A:");
				printf("\nNome: ");scanf("%s", &FilmeA.nome);
				printf("Ano: ");scanf("%d", &FilmeA.anoDeProducao);
				printf("Ator principal: ");scanf("%s", &FilmeA.atorPrincipal);
				MaisNovo = &FilmeA;	
			break;
			case 2: 
				printf("\nRegistre filme B:");
				printf("\nNome: ");scanf("%s", &FilmeB.nome);
				printf("Ano: ");scanf("%d", &FilmeB.anoDeProducao);
				printf("Ator principal: ");scanf("%s", &FilmeB.atorPrincipal);
				MaisNovo = &FilmeB;
			break;
			case 3: 
				printf("\nRegistre filme C:");
				printf("\nNome: ");scanf("%s", &FilmeC.nome);
				printf("Ano: ");scanf("%d", &FilmeC.anoDeProducao);
				printf("Ator principal: ");scanf("%s", &FilmeC.atorPrincipal);
				MaisNovo = &FilmeC;
			break;
			case 4: 
				printf("Filme mais novo: %s",(*MaisNovo).nome);
			break;
			default: printf("\a - comando valios: 1, 2 ou 3\n");
		}
		printf("\n");

	}while(ligado);
}



