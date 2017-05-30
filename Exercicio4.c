#include <stdio.h>

int main() {

struct colecaoPlacas {
	
	char pais[40];
	
	union charPlaca {
		
		char Brasil[7];
		char Argentina[6];
		char Paraguai[5];
		
	} placa;
	
} placasSulAmericanas[7];	

	
	int npais;
	int i;
	
	for(i = 0; i < 7; i++)
	{
		printf("Cadatre as placas:\n");
		printf("Pais: ");
		scanf("%s", &placasSulAmericanas[i].pais);
		printf("1. placa padrao Brasil\n");
		printf("2. placa padrao Argentina\n");
		printf("3. placa padrao Paraguai\n");
		scanf("%d", &npais);	
		switch(npais)
		{
			case 1:	printf("placa: ");scanf(" %s", &placasSulAmericanas[i].placa.Brasil); break;
			case 2: printf("placa: ");scanf(" %s", &placasSulAmericanas[i].placa.Argentina); break;
			case 3: printf("placa: ");scanf(" %s", &placasSulAmericanas[i].placa.Paraguai); break;
		}
	}
	for(i = 0; i < 7; i++)
	{
			printf("%s\n",placasSulAmericanas[i].pais);
			printf("%s\n",placasSulAmericanas[i].placa);
	}
}
	
	
