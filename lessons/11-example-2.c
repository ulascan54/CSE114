// given two sides and angle in between, finde third side of a triangle
// a ^2 =b^2 + c ^2 - 2bc cos(alpha)
#include <stdio.h>
#include <math.h>
// double sqrt(double a);
int main()
{
    double a, b, c;
    int alpha;
    printf("Enter b,c and angle in between alpha: ");
    scanf("%lf %lf %d", &b, &c, &alpha);
    a = sqrt(pow(b, 2.0) + pow(c, 2.0) - 2 * b * c * cos((alpha / 180.0) * M_PI));
    printf("Third side: %f\n", a);
    return 0;
}