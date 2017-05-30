#include <stdio.h>

void printF(int v[])
{
	printf("%d\n",*(--v));
}
int main()
{
	int vetor[6] = {11,22,33,44,55,66};
	printf(&vetor[5]);
	return 0;
}
