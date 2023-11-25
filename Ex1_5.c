#include <stdio.h>

int main()
{
    float celsius;
    printf("Fahrenheit\tCelsius\n");
    for (float i = 300; i >= 0 ; i -= 20)
    {
        celsius = 5 * (i - 32) / 9;
        printf("%6.1f\t%.1f\n" , i, celsius);
    }
}
