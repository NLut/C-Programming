#include <stdio.h>

float fah_to_cel(float fah);
float cel_to_fah(float cel);

int main()
{
    float c_degree, f_degree;
    c_degree = 25;
    f_degree = cel_to_fah(c_degree);

    printf("%.2f\n", f_degree);
    printf("%.2f\n", (fah_to_cel(f_degree)));
}

float cel_to_fah(float cel)
{
    return cel * (9.0 / 5) + 32;
}

float fah_to_cel(float fah)
{
    return (fah - 32) * (5.0 / 9);
}
