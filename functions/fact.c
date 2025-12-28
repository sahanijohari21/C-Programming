#include <stdio.h>

void fact(int n)
{
    if (n >= 0)
    {
        int f = 1;
        for (int i = 2; i <= n; i++)
            f *= i;
        printf("%d! = %d\n", n, f);
    }
    else
        printf("Negative numbers not allowed\n");
}

int main()
{
    fact(4);
    return 0;
}

/*

Output:
4! = 24

*/