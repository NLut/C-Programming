#include <stdio.h>

int main()
{
    int count = 0;
    while (getchar() != EOF)
    {
        switch (getchar()) {
            case '\n' :
            case '\t' :
            case ' ' :
                ++count;
            break;
        }
    }
    printf("%d\n", count);
}
