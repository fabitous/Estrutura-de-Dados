#include <stdio.h>

void vezes3(int v[]) {
	int i=0;
	do{
		v[i]=v[i]*3;
		i++;
	}while(i<5);
}
int main(){
    int vetor[4] = {1,2,3,4};
    printf("%d, %d, %d, %d\n",vetor[0],vetor[1],vetor[2],vetor[3]);
    vezes3(vetor);
    printf("%d, %d, %d, %d\n",vetor[0],vetor[1],vetor[2],vetor[3]);
    return 0;
}
