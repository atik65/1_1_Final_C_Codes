#include <stdio.h>

int main()
{

    char c;
    scanf("%c", &c);

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {

        printf("%c is an Alphabet\n", c);
    }
    else
    {
        printf("%c is not an Alphabet\n", c);
    }

    return 0;
}