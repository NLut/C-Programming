#include <stdio.h>

int main()
{
    int c, i, j, char_count, moreten;
    int wcount[10];
    char_count = moreten = 0;

    for (i = 0; i < 10; ++i)
    {
        wcount[i] = 0;
    }

    while (( c = getchar()) != EOF) // because assign value return that value that assigned.
    {
        if (c > 64 && c < 123)
        {
            ++char_count;
        }

        else
        {
            if (char_count > 0 && char_count < 10)
            {
                ++wcount[char_count - 1];
            }
            else 
            {
                ++moreten; 
            }
            char_count = 0;    
        }
    }
    
    for (i = 0; i < 10; ++i)
    {
        printf("%d| ", i + 1);
        for (j = 0; j < wcount[i]; j ++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf(">10| ");
    for (j = 0; j < moreten; j ++)
    {
        printf("*");
    }
    printf("\n");
}
