#include <stdio.h>

    int fib(int n)
    {
        int i,  c, a = 0, b = 1;
        for(i = 0; i < n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return(a);
    }

int main()
{
    int i;

    printf("Calcule o fibonaci - digite um índice inteiro e tecle Enter: ");
    scanf("%d",&i);

    printf("Fib = %d",fib(i));
}
