#include <stdio.h>
int max2(int a, int b)
{
    printf("max2 is running with %d and %d \n", a, b);
    if (a > b)
        return a;
    /* else */ return b;
}
int max3(int, int, int);
int max4(int, int, int, int);

int main()
{
    int x = 10, y = 50, z = 40, w = 20;
    int max_of_three, max_of_two, max_of_four;
    // max_of_two = max2(x, y);
    // max_of_three = max2(max_of_two, z);
    // max_of_three = max2(max2(x, y), z);
    max_of_three = max3(x, y, z);
    max_of_four = max4(x, y, z, w);
    printf("The max of %d, %d, %d,:%d.\n", x, y, z, max_of_three);
    printf("The max of %d, %d,%d, %d,:%d.\n", x, y, z, w, max_of_four);
}
int max3(int a, int b, int c)
{
    printf("max3 is running with %d and %d,%d \n", a, b);
    return max2(max2(a, b), c);
}

int max3(int a, int b, int c, int d)
{
    printf("max3 is running with %d and %d ,%d,%d\n", a, b, c, d);
    return max3(max3(a, b, c), d, 0);
    // return max2(max3(a,b,c),d);
    // return max2(max2(a,b),max2(c,d))
}
