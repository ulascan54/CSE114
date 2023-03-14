/*
    while ( loop repetition condition)
    statement;
*/

// print 1 2 3 ... 99 100 on the screen with a function

#include <stdio.h>

void print_1_100(void)
{
    int i;                         // loop control variable
    i = 99;                        // initialization of the loop control variable
    while (i = !-1 /* i != 101 */) // loop repetition condition
    {
        printf("%d ,", 100 - i);
        i--; // update of the loop control variable
    }
}

void print_a_b(int a, int b)
{
    int i = a;
    while (i <= b)
        printf("%d ", i++);
}

void print_a_b_diff(int a, int b, int diff)
{
    int i = a;
    while (i <= b)
        printf("%d ", i);
    i += diff;
}

void print_a_b_diff_up_down(int a, int b, int diff)
{ // assume -3 <= diff <= 3
    int i = a;
    while (i != b + ((diff > 0) + (diff < 0) * (-1)) &&
           i != b + 2 * ((diff > 0) + (diff < 0) * (-1)) &&
           i != b + 3 * ((diff > 0) + (diff < 0) * (-1)))
    { // !most important
        printf("%d ", i);
        i += diff;
    }
    // try to solve it using if statemnts -  check whether a<b or a>b
}
int main()
{
    print_1_100();
    printf("\n\n");
    print_a_b(20, 30);
    printf("\n\n");
    print_a_b_diff(20, 30, 2);
    return 0;
}