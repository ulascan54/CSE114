#include <stdio.h>
int add(int, int);

int main()
{
    int x = 5,
        y = 10,
        sum = 0;
    sum = add(x, y); // sum = 15; sum=add(5,10);
    printf("x: %d y: %d sum: %d \n", x, y, sum);

    return 0;
}

int add(int a, int b)
{
    int sum;
    sum = a + b;
    a++; // any change on the output in main ?
    // nothing will change, because "add" - functions just receives
    // Just the values of the variables of main : x and y

    // the variables x and y are not shared between the two functions
    // every function has its local memory
    // variables of add : a, b, ,sum
    // when the functions starts excuting, automatically two int variables
    // are created (a,b) insade the local memory of the function
    // and twe values sent by the callee (main function) are lassigned
    // to these variables in the given order
    // any cahnge on these variables will have no afect on the variables
    // of the calling function(main in this case -x and y)
    return sum;
}