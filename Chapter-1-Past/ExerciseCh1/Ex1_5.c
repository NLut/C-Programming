#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    float celsius;
    printf("Fahrenheit\tCelsius\n");
    for (float i = UPPER; i >= LOWER ; i -= STEP)
    {
        celsius = 5 * (i - 32) / 9;
        printf("%6.1f\t\t%.1f\n" , i, celsius);
    }
}
