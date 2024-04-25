#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    float z = (float) x / (float) y;

    printf("%f\n", z); // %li = long integer; %f = float
    printf("%.20f", z); // %.20f = 20 decimals
    printf(" <--- floating-point imprecision from a float\n");

    double zz = (double) x / (double) y;
    printf("%f\n", zz); // %li = long integer; %f = float
    printf("%.20f", zz); // %.20f = 20 decimals
    printf(" <--- less floating-point imprecision from a double\n");
}