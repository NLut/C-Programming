#include <stdio.h>

int main()
{
    int c, status;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t' || c == '\n' || c == ' ')
        {
            putchar('\n');
        }
        else
        {
            putchar(c);
        }
    }
}
