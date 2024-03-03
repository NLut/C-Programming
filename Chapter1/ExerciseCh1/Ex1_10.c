#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        switch (c) {
            case '\t': 
                putchar('\\');
                putchar('t');
                break;
            case ' ':
                putchar('\\');
                putchar('b');
                break;
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            default:
                putchar(c);
        }
    }
}
