#include <stdio.h>

int main()
{
    int c;
    char ch;
    int charArr[26];

    for (int i = 0; i < 26; ++i)
    {
        charArr[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c > 96 && c < 123)
        {
            c -= 97;
        }
        else
        {
            c -= 65;
        }
        ++charArr[c];
    }

    for (int i = 0; i < 26; ++i)
    {
        ch = i + 65;
        printf("%c| ", ch);
        for (int j = 0; j < charArr[i]; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
}
