#include <stdio.h>

int iplusplus();
int plusplusi();

int main()
{
    int before = plusplusi();
    int after = iplusplus();
    printf("Before %d, After %d\n", before, after);
}

int iplusplus()
{
    int i = 0;
    return i++;
}

int plusplusi()
{
    int i = 0;
    return ++i;
}
