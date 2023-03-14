#include <stdio.h>
int main()
{
    int a = 100, b = 200, c = 150;
    printf("result: %d\n", a && b > c); // result 1
                                        // (a > b) && (c > d)

    int a = 100, b = -200, c = 150;
    printf("result: %d\n", (a && b) > c); // result 1

    printf("result: %d\n", (a > c) && b > c); // result 0
}