#include <stdio.h>

int main()
{
    int i, n=100;

    printf("First Fifty Odd Numbers are :\n");
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
