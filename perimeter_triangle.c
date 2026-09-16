#include <stdio.h>

int main()
{
    float a, b, c, perimeter;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    perimeter = a + b + c;

    printf("Perimeter of the triangle = %.2f", perimeter);

    return 0;
}
