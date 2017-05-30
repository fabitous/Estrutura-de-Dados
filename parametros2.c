#include <stdio.h>

int vetor[6] = {1,2,3,4,5,6};

void vezes5(int v[]) {
	printf("%d\n",v[0]*5);
}
int main(){
    printf("%d\n",vetor[5]);
    vezes5(&vetor[5]);
    return 0;
}
