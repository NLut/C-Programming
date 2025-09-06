#include <stdio.h>

int main()
{
    int c;

    // 1st version
    // c = getchar();
    // while (c != EOF)
    // {
    //     putchar(c);
    //     c = getchar();
    // }

    // 2nd version -> more concise
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}
