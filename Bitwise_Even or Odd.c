#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    if (N & 1 == 1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
    return 0;
}