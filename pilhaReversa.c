#include <stdio.h>

int main() {
	
	typedef struct node {
	
		char info;
		struct node *next;

	} NODE;
	
	typedef NODE *STACK;
	STACK s1 = NULL;
	STACK s2 = NULL;
	STACK s3 = NULL;
	STACK s4 = NULL;

	void push (STACK *ps, char elem) {
	
		NODE *pnew;		
		pnew = (NODE *)malloc(sizeof(NODE));
		(*pnew).info = elem;
		(*pnew).next = *ps;
		*ps = pnew;

	}
	
	void pilhaReversa (STACK *ps) {
		
		NODE *saux;		
		saux = *ps;
		
		do {
			
			push(&s2,(*saux).info);
			saux = (*saux).next;		
		
		}while(saux != NULL);
	}
	
	void pilhaConcatena (STACK *ps1, STACK *ps2) {
		
		NODE *saux1;		
		saux1 = *ps1;
		
		NODE *saux2;		
		saux2 = *ps2;
		
		do {		

				push(&s3,(*saux1).info);
				saux1 = (*saux1).next;		
						
		}while(saux1 != NULL);
		do {		

				push(&s3,(*saux2).info);
				saux2 = (*saux2).next;		
						
		}while(saux2 != NULL);
	}
	
	void pilhaIntercala (STACK *ps3, STACK *ps4) {
		
		NODE *saux3;		
		saux3 = *ps3;

		NODE *saux4;		
		saux4 = *ps4;
		
		do {
			
				push(&s4,(*saux3).info);
				saux3 = (*saux3).next;		
			
				push(&s4,(*saux4).info);
				saux4 = (*saux4).next;		
		
		}while(saux3 != NULL && saux4 != NULL);
	}
		
	void printapilha (STACK s) {
		
		do {
			
			printf("%c\n",(*s).info);
			s = (*s).next;
					
		}while(s != NULL);
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
	
	printf("inserindo elementos na pilha S1:\n");
	push(&s1,'a');printf("end: %d",s1);printf(" elem: %c\n",(*s1).info);
	push(&s1,'b');printf("end: %d",s1);printf(" elem: %c\n",(*s1).info);
	push(&s1,'c');printf("end: %d",s1);printf(" elem: %c\n",(*s1).info);
	printf("\nsalvando a pilha reversa em s2 (void).\n\n");
	pilhaReversa(&s1);
	printf("Pilha s2:\n");
	printapilha(s2);
	printf("\nPilha s1:\n");
	printapilha(s1);
	printf("\nconcatena pilhas s1 e s2 em s3 (void).\n\n");
	pilhaConcatena(&s1,&s2);
	printf("\nPilha s3:\n");
	printapilha(s3);
	printf("\nintercala pilhas s1 e s2 em s4 (void).\n\n");
	pilhaIntercala(&s1,&s2);
	printf("\nPilha s4:\n");
	printapilha(s4);
}

