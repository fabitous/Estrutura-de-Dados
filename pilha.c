#include <stdio.h>

int main() {
	
	typedef struct node {
		
		char c;
		
		struct node *next;
		
	} Node;
	
	typedef Node *STACK;
	
	STACK topoDaPilha;
	
	Node noh = malloc(sizeof(STACK topoDaPilha));
	
	noh.c = 'a';
	
	noh.next = &noh.c;
	
	printf("valor: %c\n",noh.c);
	
	printf("endereco int: %d",el1.next);
	
	printf("\n");
	
}
