/* if (condition)
        statement_T;
else statement _F;
if condition
    statement_T;
else
    statement_F;
if (condition)
    statement_T;
if (condition)
    statement_T;

*/
#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = -30, d = 0;
    //     if (a < b)
    //     c = 50;
    //     d = 100;// wrong indentation(logically-not syntactically)
    // else// a new ,nstruction sstarts with else - compiler error !!
    //     c = 200;

    if (a < b)
    {
        c = 50;
        d = 100;
    }
    else
        c = 200;

    printf("c: %d, d:%d \n", c, d);

    // if (a < b)if (b < c)d = 500;else d = 400;
    // printf("d:%d \n", d);

    if (a < b)
        if (b < c)
            d = 500;
        else // even though aligned with first if this else belongs to second if
            d = 400;
    printf("d:%d \n", d);

    if (a < b)
    {
        if (b < c)
            d = 500;
    }
    else
        d = 400;
    printf("d:%d \n", d);
}