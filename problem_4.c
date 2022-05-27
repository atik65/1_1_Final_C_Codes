#include <stdio.h>

int main()
{

    int sum = 1, i;

    for (i = 4; i >= 1; i--)
    {
        sum *= i;
    }

    printf("%d\n", sum);

    return 0;
}