#include <stdio.h>
#include <math.h>

float area(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt(s*(s - a) *(s - b) * (s - c));
}

int isValidTriangle(float a, float b, float c)
{
    return (a + b > c && b + c > a && a + c > b);
}

int main()
{
    float a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a <= 0 || b<=0 || c<=0) printf(" The triangle does not contain 0 or negative side length");

    if (isValidTriangle(a, b, c))
    {
        printf("The triangle is valid\n");
        printf("Area of the triangle is = %f\n", area(a, b, c));
    }
    else
    {
        printf("Invalid triangle\n");
    }

    return 0;
}
