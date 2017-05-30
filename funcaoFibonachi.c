#include <stdio.h>

    int fib(int n)
    {
        if(n == 0||n == 1)
            return(n);
        if(n > 1)
            return(fib(n-1)+fib(n-2));
    }

int main()
{
    int i;

    printf("Calcule o fatorial - digite um número inteiro e tecle Enter: ");
    scanf("%d",&i);

    printf("Fib = %d",fib(i));
}
