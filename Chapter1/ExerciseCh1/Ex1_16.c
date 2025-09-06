#include <stdio.h>

int longest_line();

int main()
{
    int maxLength = longest_line();
    return 0;
}

int longest_line()
{
    int d, c, buff, len;
    len = buff = 0;

    while ((c = getchar()) != EOF)
    {
        while ((d = getchar()) != '\n')
        {
            ++buff;        
        }
        
        if (len < buff)
        {
            len = buff + 3; // 1 for \n , 1 for \0 and other one from first character(c) which we haven't count 
        }
        buff = 0;
    }
    return len;

}
