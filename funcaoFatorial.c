#include <stdio.h>

    int fatorial(int n)
    {
        if(n == 0)
            return(1);
        else
            return(n*fatorial(n - 1));
    }

int main()
{
    int fat;

    printf("Calcule o fatorial - digite um número inteiro e tecle Enter: ");
    scanf("%d",&fat);

    fat=fatorial(fat);
    printf("Fatorial = %d",fat));
}
