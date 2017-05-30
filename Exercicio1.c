#include <stdio.h>

struct socios {
	
 int numero;
 char nome[20];
 char tipoDeTitulo;
 
} clube[10];

void cadastrar(int n) {
	if(n < 10)
	{
		clube[n].numero = n;
		printf("Digite o nome do socio e tecle Enter: ",n);
		scanf(" %s", &clube[n].nome);
		printf("Tipo de titulo: f - caso familia ou i - caso individual: ",n);
		scanf(" %c", &clube[n].tipoDeTitulo);	
	}else{
		printf("Capacidade maxima, de dez cadastros, atingida.\n",n);
	}	
}

void visualizar(int nsocios) {

	int n = 0;
	printf("Digite o numero do socio e tecla Enter: ");
	scanf(" %d", &n);
	if(n < nsocios)
	{
		printf(" Socio %d:\n",n);printf(" nome: %s\n",clube[n].nome);printf(" tipo de titulo: %c\n",clube[n].tipoDeTitulo);		
	}else{
		printf("Cadastro inexistente.\n",n);
	}
	char menu;
	printf("\n\n - voltar ao menu? digite qualquer tecla e tecle Enter ");
	scanf(" %c", &menu);
}

int excluir(int nsocios) {
	
	int n;
	printf("Digite o numero do socio e tecla Enter: ");	
	scanf(" %d", &n);

	if(n < nsocios)
	{
		for( n; n < nsocios -1; n++)
		{
			clube[n] = clube[n+1];
		}
		printf("O socio %d foi excluido.\n",n);
		return --nsocios;	
	}else{
		printf("Cadastro inexistente.\n",n);
	}
}

int main()
{
	struct socios clube[10];
	
	int comando = 0;
	int esperaComando = 1;
	int socioNumero = 0;
	int ligado = 1;
	
	do
	{
		printf("Menu:\n1. cadastrar socio\n2. visualizar lista de socio\n3. excluir socio\n4. sair\n\n");
		do
		{
		scanf(" %d", &comando);
		esperaComando = 0;
    		}
		while(esperaComando);
	
		switch(comando)
		{
			case 1: cadastrar(socioNumero);socioNumero++; break;
			case 2: visualizar(socioNumero); break;
			case 3: socioNumero = excluir(socioNumero); break;
			case 4: ligado = 0; break;
			default: printf("\a - comando valios: 1, 2, 3 ou 4\n");
		}
		printf("\n");
		
	}while(ligado);
}


