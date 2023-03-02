#include <stdio.h>

int main()
{
    int a, b, m, n;
    a = 5;
    b = 10;
    printf("\na: %d b: %d \n", a, b);
    a++;
    b++;
    printf("a: %d b: %d \n", a, b);
    m = ++a + 10;
    printf("a: %d b: %d m: %d \n", a, b, m);

    // a++ post increment;
    // ++a pre increment

    // colon sıralamak için %d leri kullanırız
    n = 3443;
    printf("a: %-8d b: %-10d m: %d n: %d \n", a, b, m, n);
    a = 432;
    b = 454;
    printf("a: %-8d b: %-10d m: %d n: %d \n", a, b, m, n);
}