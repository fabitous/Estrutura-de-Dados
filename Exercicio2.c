#include <stdio.h>

struct aluno
{
    char nome[30];
    char prontuario[6];
    char curso;
    float Bim1;
    float Bim2;
    float media;

} vetor[10];

void cadastrar(int n) {

	if(n < 10)
	{
		printf("Digite o nome do Aluno e tecle Enter: ");
		scanf(" %s", &vetor[n].nome);
		printf("Digite o prontuario do Aluno e tecle Enter: [6 caracteres]: ");
		scanf(" %s", &vetor[n].prontuario);
		printf("Digite o curso do Aluno [1 caractere!]: ");
		scanf(" %c", &vetor[n].curso);
		printf("Digite a nota do Aluno no 1 Bimestre: ");
		scanf(" %f", &vetor[n].Bim1);
		printf("Digite a nota do Aluno no 2 Bimestre: ");
		scanf(" %f", &vetor[n].Bim2);

	}else {

		printf("Capacidade maxima, de dez cadastros, atingida.\n",n);
	}
}

void mostrarmedias(alunoNumero) {

    int n = alunoNumero - 1;
    float tBim1;
    float tBim2;
	
	int i;

    for( i = 0; i <= n; i++) {

            vetor[i].media = (vetor[i].Bim1 + vetor[i].Bim2)/2;
            
            tBim1 = tBim1 + vetor[i].Bim1;
            tBim2 = tBim2 + vetor[i].Bim2;
    }

    for( i = 0; i <= n; i++) {

        printf("Media do aluno %s",vetor[i].nome);printf(": %f\n",vetor[i].media);
    }

	float aN = alunoNumero;
    printf("\n %f",aN);
    printf("\nMedia do curso: %f",((tBim1+tBim2)/(2*aN)));
    printf("\nMedia do Bim1: %f",(tBim1/aN));
    printf("\nMedia do Bim2: %f",(tBim2/aN));
}

void maiorMediaEmaiorNota(alunoNumero) {
	
	int n = alunoNumero - 1;
	float maiorMedia;
	int nMaiorMedia;
	float maiorNota;
	int nMaiorNota;
	
	int i;
	
	for( i = 0; i == n; i++) {
		
		if(maiorNota < vetor[i].Bim1)
		{
			maiorNota = vetor[i].Bim1;
			nMaiorMedia = i;
		}
		if(maiorNota < vetor[i].Bim2)
		{
			maiorNota = vetor[i].Bim2;
			nMaiorMedia = i;
		}
	}

	for( i = 0; i == n; i++) {
		
		if(maiorMedia < vetor[i].media)
		{
			maiorMedia = vetor[i].media;
			nMaiorNota = i;
		}
	}
	printf("Maior media = %f",maiorMedia);printf(" aluno: %s",vetor[nMaiorMedia].nome);
	printf("Maior nota = %f",maiorNota);printf(" aluno: %s",vetor[nMaiorNota].nome);
	printf("\n");	
}

int main()
{
	struct aluno vetor[10];

	int comando = 0;
	int esperaComando = 1;
	int alunoNumero = 0;
	int ligado = 1;

	do
	{
		printf("Menu:\n1. cadastrar aluno\n2. visualizar medias\n3. maior media e maior nota\n");
		do
		{
            scanf(" %d", &comando);
            esperaComando = 0;
        }
		while(esperaComando);

		switch(comando)
		{
			
			case 1: cadastrar(alunoNumero);alunoNumero++; break;
			case 2: mostrarmedias(alunoNumero); break;
			case 3: break;
			default: printf("\a - comando valios: 1, 2 ou 3\n");
		}
		printf("\n");

	}while(ligado);
	
}
