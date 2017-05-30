#include <stdio.h>

int main() {
	
	typedef struct node {
	
		char info;
		struct node *next;

	} NODE;
	
	typedef NODE *STACK;
	STACK s = NULL;

	void push (STACK *ps, char elem) {
	
		NODE *pnew;	
		pnew = (NODE *)malloc(sizeof(NODE));
		(*pnew).info = elem;
		(*pnew).next = *ps;
		*ps = pnew;

	}
	
	void printapilha (STACK s) {
		
		if(s != NULL) {
			
			printf("\n %c\n",(*s).info);
			s = (*s).next;		
		}
	}
	
	char pop (STACK *ps) {
		
		char caux;
		NODE *saux;
		
		saux = *ps;
		caux = (*saux).info;
		*ps = (*saux).next;
		free(saux);
		
		return caux;
	}
	
	void pushE() {
		
		char elem;
		printf("Digite um caratcere: \n");
		scanf("%s",&elem);
		push(&s,elem);
	}
	
	int ligado = 1;
	int comando = 0;

	do{

		printf("1. push E 2. print pilha 3. pop\n");
		scanf("%d",&comando);
		switch(comando)
		{
		case 1: pushE();break;
		case 2: printapilha(s);break;
		case 3: pop(&s);break;
		} 	
		
	}while(ligado);
	
}
