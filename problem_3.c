#include <stdio.h>

int main()
{

    int i, sum = 0;

    for (i = 4; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);
    return 0;
}