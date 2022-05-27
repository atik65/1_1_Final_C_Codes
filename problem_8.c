#include <stdio.h>

int main()
{

    char c;

    scanf("%c", &c);

    if (c == 'F' || c == 'f')
    {
        printf("The given character is F");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("The given character is N");
    }
    else if (c == 'S' || c == 's')
    {
        printf("The given character is S");
    }

    return 0;
}