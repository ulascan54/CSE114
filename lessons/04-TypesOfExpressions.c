#include <stdio.h>

int main()
{
    int m, n, y_rounded;
    double p, x, y, y_fractional;
    m = 3;
    n = 2;
    p = 2.0;
    x = m / p;
    // y = m / (n); // y =!; ---- converted to y=1.0
    // y = 10.3 + m / (n + 0.0);
    y = 10.3 + m / (double)n;
    printf("x: %f and y: %f \n", x, y);

    y = 11.8;
    // rounding the value y (11.8) - y_rounded should be 12
    y_rounded = (int)y;                 // yet it is the integer part of y
    y_fractional = y - (int)y;          // 11.8 - 11 = 0.8
    y_rounded += (y_fractional >= 0.5); // if(y_fractional >= 0.5) y_rounded++;

    printf("y: %f and y_rounded: %d \n", y, y_rounded);

    // y_rounded += 1; and will be eqv to y_rounded++;
    // y_rounded +=0;
    /*
    if(y_fractional >= 0.5) y_rounded++;

    x = x /6; ---> x/=6;
    y= y * 5; ---> y*=5;
    */

    // second way to rounding
    y_rounded = (int)(y + 0.5);
}