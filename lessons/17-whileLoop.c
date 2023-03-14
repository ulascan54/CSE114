/*
    while ( loop repetition condition)
    statement;
*/

// print 1 2 3 ... 99 100 on the screen with a function

#include <stdio.h>

void print_1_100(void)
{
    int i;                         // loop control variable
    i = 1;                         // initialization of the loop control variable
    while (i < 101 /* i != 101 */) // loop repetition condition
    {
        printf("%d ,", i);
        i++; // update of the loop control variable
        // another way: printf("%d ,", i++);
    }
    /*
    another way:
    i =0;
    while(i<100) printf("%d ,", ++i);

    EQV TO
    while(i<100){ i++ ; printf("%d ,", i);}
    */
}

int main()
{
    print_1_100();
    return 0;
}