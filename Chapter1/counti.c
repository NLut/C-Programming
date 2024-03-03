#include <stdio.h>

int main()
{
    // 1st Version
    // long nc = 0;
    //
    // while (getchar() != EOF)
    //     ++nc;
    // printf("%ld\n", nc);

    // 2nd Version
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
    {
        ;
    }
    printf("\n");
    printf("%.0f\n", nc);
}
